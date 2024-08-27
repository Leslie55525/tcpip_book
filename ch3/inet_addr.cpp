#include <stdio.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
    char *addr1 = "1.2.3.4";
    char *addr2 = "1.2.3.267";

    unsigned long conv_addr=inet_addr(addr1);
    if(conv_addr ==INADDR_NONE)
    {
        printf("error occured!\n");
    }


    char *addrAton = "125.123.133.333";
    struct sockaddr_in addr_inet;
    if(!inet_aton(addrAton, &addr_inet.sin_addr))
    {
        printf("error aton!\n");
    }

    conv_addr = inet_addr(addr2);
    if(conv_addr ==INADDR_NONE)
    {
        printf("error occured222!\n");
    }

    return 0;
}