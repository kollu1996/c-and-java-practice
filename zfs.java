class-map type inspect match-all all-private
 match access-group 101
!         
policy-map type inspect priv-pub-pmap
 class type inspect all-private
  inspect
 class class-default
!
zone security private
zone security public
zone-pair security priv-pub source private destination public
 service-policy type inspect priv-pub-pmap
! 
interface FastEthernet4
 ip address 172.16.108.44 255.255.255.0
 zone-member security public
!
interface Vlan1
 ip address 192.168.108.1 255.255.255.0
 zone-member security private
!
access-list 101 permit ip 192.168.108.0 0.0.0.255 any
Zone-pair: priv-pub
 
  Service-policy inspect : priv-pub-pmap
 
    Class-map: all-private (match-all)
      Match: access-group 101
      Inspect
        Packet inspection statistics [process switch:fast switch]
        tcp packets: [413:51589]
        udp packets: [74:28]
        icmp packets: [0:8]
        ftp packets: [23:0]
        tftp packets: [3:0]
        tftp-data packets: [6:28]
        skinny packets: [238:0]

  Session creations since subsystem startup or last reset 39
        Current session counts (estab/half-open/terminating) [3:0:0]
        Maxever session counts (estab/half-open/terminating) [3:4:1]
        Last session created 00:00:20
        Last statistic reset never
        Last session creation rate 2
        Maxever session creation rate 7
        Last half-open session total 0
 
    Class-map: class-default (match-any)
      Match: any 
      Drop (default action)
        0 packets, 0 bytes

  class-map type inspect match-all all-private
 match access-group 101
class-map type inspect match-all private-ftp
 match protocol ftp
 match access-group 101
class-map type inspect match-any netbios
 match protocol msrpc
 match protocol netbios-dgm
 match protocol netbios-ns
 match protocol netbios-ssn
class-map type inspect match-all private-netbios
 match class-map netbios
 match access-group 101
class-map type inspect match-all private-ssh
 match protocol ssh
 match access-group 101
class-map type inspect match-all private-http
 match protocol http
 match access-group 101
!
policy-map type inspect priv-pub-pmap
 class type inspect private-http
  inspect
 class type inspect private-ftp
  inspect
 class type inspect private-ssh
  inspect
 class type inspect private-netbios
  inspect
 class type inspect all-private
  inspect
 class class-default!
zone security private
zone security public
zone-pair security priv-pub source private destination public
 service-policy type inspect priv-pub-pmap
! 
interface FastEthernet4
 ip address 172.16.108.44 255.255.255.0
 zone-member security public
!
interface Vlan1
 ip address 192.168.108.1 255.255.255.0
 zone-member security private
!
access-list 101 permit ip 192.168.108.0 0.0.0.255 any

 Class-map: private-http (match-all)
       Match: protocol http
       Match: access-group 101
       Inspect
         Packet inspection statistics [process switch:fast switch]
         tcp packets: [0:2193]

         Session creations since subsystem startup or last reset 731
         Current session counts (estab/half-open/terminating) [0:0:0]
         Maxever session counts (estab/half-open/terminating) [0:3:0]
         Last session created 00:29:25
         Last statistic reset never
         Last session creation rate 0
         Maxever session creation rate 4
         Last half-open session total 0

     Class-map: private-ftp (match-all)
       Match: protocol ftp
       Inspect
         Packet inspection statistics [process switch:fast switch]
         tcp packets: [86:167400]
         ftp packets: [43:0]

         Session creations since subsystem startup or last reset 7
         Current session counts (estab/half-open/terminating) [0:0:0]
         Maxever session counts (estab/half-open/terminating) [2:1:1]
         Last session created 00:42:49
         Last statistic reset never
         Last session creation rate 0
         Maxever session creation rate 4
         Last half-open session total 0

     Class-map: private-ssh (match-all)
       Match: protocol ssh
       Inspect
         Packet inspection statistics [process switch:fast switch]
         tcp packets: [0:62]

         Session creations since subsystem startup or last reset 4
         Current session counts (estab/half-open/terminating) [0:0:0]
         Maxever session counts (estab/half-open/terminating) [1:1:1]
         Last session created 00:34:18
         Last statistic reset never
         Last session creation rate 0
         Maxever session creation rate 2
         Last half-open session total 0

     Class-map: private-netbios (match-all)
       Match: access-group 101
       Match: class-map match-any netbios
         Match: protocol msrpc
           0 packets, 0 bytes
           30 second rate 0 bps
         Match: protocol netbios-dgm
           0 packets, 0 bytes
           30 second rate 0 bps
         Match: protocol netbios-ns
           0 packets, 0 bytes
           30 second rate 0 bps
         Match: protocol netbios-ssn
           2 packets, 56 bytes
           30 second rate 0 bps
       Inspect
         Packet inspection statistics [process switch:fast switch]
         tcp packets: [0:236]
 
         Session creations since subsystem startup or last reset 2
         Current session counts (estab/half-open/terminating) [0:0:0]
         Maxever session counts (estab/half-open/terminating) [1:1:1]
         Last session created 00:31:32
         Last statistic reset never
         Last session creation rate 0
         Maxever session creation rate 1
         Last half-open session total 0

     Class-map: all-private (match-all)
       Match: access-group 101
       Inspect
         Packet inspection statistics [process switch:fast switch]
         tcp packets: [51725:158156]
         udp packets: [8800:70]
         tftp packets: [8:0]
         tftp-data packets: [15:70]
         skinny packets: [33791:0]

         Session creations since subsystem startup or last reset 2759
         Current session counts (estab/half-open/terminating) [2:0:0]
         Maxever session counts (estab/half-open/terminating) [2:6:1]
         Last session created 00:22:21
         Last statistic reset never
         Last session creation rate 0
         Maxever session creation rate 12
         Last half-open session total 0
 
     Class-map: class-default (match-any)
       Match: any 
       Drop (default action)
         4 packets, 112 bytes

  
