#include <stdio.h>

#define MAX_PLAYERS (100)
#define PORT (8080)

typedef unsigned long long ServerID;

int main (void){
    ServerID server = 994737438;
    printf("Max Players: %d\n Port: %d\n Server ID:%llu\n", MAX_PLAYERS, PORT, server);
} 