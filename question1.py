from mininet.topo import Topo
from mininet.net import Mininet
from mininet.link import TCLink
from mininet.cli import CLI
from mininet.log import setLogLevel

class NetworkLoopTopo(Topo):
    def build(self):
        s = [self.addSwitch(f's{i}') for i in range(1, 5)]
        h = [self.addHost(f'h{i}', ip=f'10.0.0.{i+1}/24') for i in range(1, 9)]

        # Host-Switch links
        self.addLink(h[0], s[0], cls=TCLink, delay='5ms')
        self.addLink(h[1], s[0], cls=TCLink, delay='5ms')
        self.addLink(h[2], s[1], cls=TCLink, delay='5ms')
        self.addLink(h[3], s[1], cls=TCLink, delay='5ms')
        self.addLink(h[4], s[2], cls=TCLink, delay='5ms')
        self.addLink(h[5], s[2], cls=TCLink, delay='5ms')
        self.addLink(h[6], s[3], cls=TCLink, delay='5ms')
        self.addLink(h[7], s[3], cls=TCLink, delay='5ms')

        # Switch-Switch links
        self.addLink(s[0], s[1], cls=TCLink, delay='7ms')
        self.addLink(s[1], s[2], cls=TCLink, delay='7ms')
        self.addLink(s[2], s[3], cls=TCLink, delay='7ms')
        self.addLink(s[3], s[0], cls=TCLink, delay='7ms')
        self.addLink(s[0], s[2], cls=TCLink, delay='7ms')  # Redundant link

def run():
    topo = NetworkLoopTopo()
    net = Mininet(topo=topo, link=TCLink)
    net.start()
    CLI(net)
    net.stop()

if __name__ == '__main__':
    setLogLevel('info')
    run()
