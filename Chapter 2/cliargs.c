#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 2) {
        printf("Welcome %s\n", argv[1]);
    }
    else {
        printf("Please provide a name.\n");
        return 1;
    }
}