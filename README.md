# TCP-IP-using-socket-programming-WINDOWS-
Communication between server- clients through socket programming using TCP/IP using windows programming.

If we are creating a connection between client and server using TCP then it has few functionality like,
TCP is suited for applications that require high reliability, and transmission time is relatively less critical.
It is used by other protocols like HTTP, HTTPs, FTP, SMTP, Telnet. TCP rearranges data packets in the order specified. 
There is absolute guarantee that the data transferred remains intact and arrives in the same order in which it was sent. 
TCP does Flow Control and requires three packets to set up a socket connection, before any user data can be sent. 
TCP handles reliability and congestion control. It also does error checking and error recovery. 
Erroneous packets are retransmitted from the source to the destination.


In this tutorial, I will explain how server-client communication uses TCP/IP. 
I have already explained about socket and How to create Socket in Windows. Before explanation, let’s see some basic views of terminology.

Three main things are needed to establish connection between server-client models:

1)      Transport protocol (TCP or UDP)

2)      Socket

3)      IP address and port

Transport protocol (TCP):

TCP is a connection oriented protocol which stands for transfer control protocol.
It is a reliable and secure protocol.
In TCP, the receiver can generate the acknowledgement of received packet so sender (client) does need 
to wait for the acknowledgement and if the back response  doesn’t come or any packet error is generated, 
it will resend to the client.

Socket:

The socket is end point connection for communication between two machines.
It is like data connectivity path between two wireless terminals. 
The socket is required at both sides of server and client. You can refer to the tutorial socket and
How to create socket in Windows.

IP address and port:

IP address is a unique numerical address of each computer and device. 
It plays an important role in networking domain with Internet protocol.
In server – client model, the server needs to know about which device is connected with it
and with whom server establishes the connection. 
IP address plays an important role in communication between server-client models.

In terms of networking, the port is the location where information is sent. 
Various protocols assign a different port number. 
The specific port number is required to communicate between server-client according to which protocol is used.

Let’s  check how to get user’s IP address. Enter the following command from command prompt:

           **ipconfig**

It displays network information like address, data packet etc. Be sure which type  of Internet connection is in your system.

 The IP address of the system is located by  "IPv4 Address”. It is your system IP address.

For example, inet addr: xxx.xx.xx.xx

Here, x represents numerical value.


The following tasks are done at server side:

·         Create a socket for communication

·         Bind the local port and connection address

·         Configure TCP protocol with port number

·         Listen for client connection

·         Accept connection from client

·         Send Acknowledgement

·         Receive message from client

·         Send  message to the client

The following tasks are done at client side:

·         Create a socket for communication

·         Configure TCP protocol with IP address of server and port number

·         Connect with server through socket

·         Wait for acknowledgement from server

·         Send message to the server

·         Receive message from server
 
