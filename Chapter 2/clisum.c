#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int sum = 0;
    if (argc == 3){
        sum = atoi(argv[1]) + atoi(argv[2]);
        printf("%d\n", sum);
    }
    else{
        printf("Enter 2 arguments only.\n");
    }
}