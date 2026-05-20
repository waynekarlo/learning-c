#include <stdio.h>
#include <stdlib.h>

void double_value(void *num){
    double *x;
    x = (double *)num;

    *x = *x * 2;
}

int main(void){
    double money = 15.50;
    double_value(&money);
    printf("%g\n", money);
}