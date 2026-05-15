#include <stdio.h>
#include <math.h>

int main(void){
    int x;
    int i, j, k;
    char letter;
    float winpct;
    double pi;
    
    x = 7;
    k = x + 2;

    letter = 'A';
    letter = letter + 1;

    pi = 3.1415926;

    winpct = 11 / 2.0;
    j = 11 / 2;
    x = k % 2;

    printf("number of bytes in an int: %lu\n", sizeof(int));
    printf("number of bytes in a short: %lu\n", sizeof(short));
    
    return 0;
}