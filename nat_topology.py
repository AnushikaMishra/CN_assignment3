from mininet.topo import Topo
from mininet.net import Mininet
from mininet.node import Node
from mininet.link import TCLink
from mininet.cli import CLI
from mininet.log import setLogLevel

class LinuxRouter(Node):
    """A Node with IP forwarding enabled."""
    def config(self, **params):
        super(LinuxRouter, self).config(**params)
        self.cmd('sysctl -w net.ipv4.ip_forward=1')

class NetworkNATTopo(Topo):
    def build(self):
        # Create switches
        s1 = self.addSwitch('s1')  # internal side switch
        s2 = self.addSwitch('s2')  # external side switch

        # Create hosts
        h1 = self.addHost('h1', ip='10.1.1.2/24', defaultRoute='via 10.1.1.1')
        h2 = self.addHost('h2', ip='10.1.1.3/24', defaultRoute='via 10.1.1.1')

        h3 = self.addHost('h3', ip='10.0.0.4/24')
        h4 = self.addHost('h4', ip='10.0.0.5/24')
        h5 = self.addHost('h5', ip='10.0.0.6/24')
        h6 = self.addHost('h6', ip='10.0.0.7/24')
        h7 = self.addHost('h7', ip='10.0.0.8/24')
        h8 = self.addHost('h8', ip='10.0.0.9/24')

        # Create NAT router
        nat0 = self.addNode('nat0', cls=LinuxRouter, ip='10.1.1.1/24')

        # Links internal side
        self.addLink(h1, s1)
        self.addLink(h2, s1)
        self.addLink(nat0, s1)  # NAT internal interface

        # Links external side
        self.addLink(nat0, s2)  # NAT external interface
        self.addLink(h3, s2)
        self.addLink(h4, s2)
        self.addLink(h5, s2)
        self.addLink(h6, s2)
        self.addLink(h7, s2)
        self.addLink(h8, s2)

def run():
    topo = NetworkNATTopo()
    net = Mininet(topo=topo, link=TCLink)
    net.start()

    # Configure NAT (on external interface)
    nat0 = net.get('nat0')
    nat0.cmd('ifconfig nat0-eth1 10.0.0.10/24')  # external IP

    # Enable NAT
    nat0.cmd('iptables -t nat -A POSTROUTING -o nat0-eth1 -j MASQUERADE')
    nat0.cmd('iptables -A FORWARD -i nat0-eth0 -o nat0-eth1 -j ACCEPT')
    nat0.cmd('iptables -A FORWARD -i nat0-eth1 -o nat0-eth0 -m state --state ESTABLISHED,RELATED -j ACCEPT')

    CLI(net)
    net.stop()

if __name__ == '__main__':
    setLogLevel('info')
    run()
