// Command to compile with gcc:
// gcc -o main main.c -lwiringPi -lrt -lpthread -lm -lrt -lcrypt -lbluetooth

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "models/bluetooth.c"
#include "models/bluetooth.h"


bool startServerBluetooth() {
    // TODO modifier la taille du buf si possible
    char buf[1024] = { 0 };
    int s, bytes_read = -1;
    int client = init_server();
    int port = 3;

    do {
        // read data from the client
        memset(buf, 0, sizeof(buf));
        bytes_read = read(client, buf, sizeof(buf));
        // le message envoye doit etre buff
        
        
        if( bytes_read > 0 ) {
            printf("received [%s]\n", buf);
            char src[] = "python3 client.py ";
            strcat(src, buf);
            printf("envoie : [%s]", src);
            system(src);
        }
    } while (bytes_read > 0);

    // close connection
    printf("Closing connection.\n");
    close(client);
    close(s);
    sdp_close( s );

    return true;
}


// --------------------------------------
// -              MAIN                  -
// --------------------------------------

int main(int argc, char *argv[]){

    bool success = startServerBluetooth();

    return 1;
}

