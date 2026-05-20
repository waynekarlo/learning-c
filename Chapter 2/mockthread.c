#include <stdio.h>
#include <stdlib.h>

void process_thread_args(void *args){
    int x = 0;
    int y = 0;
    x = *((int *)args);
    y = *((int *)args + 1);
    printf("%d\n", x + y);
}

int main(void){
    int payload[2] = {100,250};
    process_thread_args(payload);
}