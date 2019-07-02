#include <sys/types.h>

#include <Winsock2.h>

#include <ws2tcpip.h>

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <errno.h>

#pragma warning( disable : 4996)

#pragma comment(lib, "Ws2_32.lib")


int main()

{

	char sendMessage[512], receiveMessage[512];

	int sock, result;

	struct sockaddr_in serv_addr;

	struct hostent* host;

	//struct sockaddr_in serverAdd;

	host = gethostbyname("***.***.***.***");

	int iResult;

	// Initialize Winsock

	WSADATA wsaData;

	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);

	if (iResult != 0) 
	{

		printf("WSAStartup failed: %d\n", iResult);

		return 1;
	}


	if ((sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == 0)

	{
		perror("Socket creation failed");

		exit(1);

	}

	serv_addr.sin_family = AF_INET;

	serv_addr.sin_port = htons(5000);

	//serverAdd.sin_addr = *((struct in_addr*)host->h_addr);

	memset(&(serv_addr.sin_zero), 8, sizeof(int));

	if (inet_pton(AF_INET, "192.168.225.156", &serv_addr.sin_addr) <= 0)
	{
		printf("\nInvalid address/ Address not supported \n");
		return -1;
	}
	if (connect(sock, (struct sockaddr*) & serv_addr, sizeof(struct sockaddr)) == -1)

	{

		perror("Connection failed");

		exit(1);

	}

	while (1)

	{

		result = recv(sock, receiveMessage, 1024, 0);

		receiveMessage[result] = '\0';

		printf("\nRecieved Message: %s ", receiveMessage);

		printf("\nSEND The message: ");

		fgets(sendMessage, 512, stdin);

		send(sock, sendMessage, strlen(sendMessage), 0);

	}

	return 0;

}
