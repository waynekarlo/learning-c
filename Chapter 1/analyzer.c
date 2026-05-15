#include <stdio.h>
#include <math.h>

void check_number(int num){
    if(num % 2 == 0){
        printf("The number %d is even\n", num);
    }
    else {
        printf("The number %d is odd\n", num);
    }
}

int main(void){
    int number = -1;

    while (number != 0){
        printf("Enter a number to analyze: ");
        scanf("%d", &number);
        if (number != 0) {
            check_number(number);
        }
    }
    
}