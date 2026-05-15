#include <stdio.h>

void print_factors(int num){
    int i;
    printf("The factors of %d are: ", num);
    for (i = 1; i <= num; i++) {

        if (num % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(void){
    int number = -1;

    printf("Enter a number to factorize: ");
    scanf("%d", &number);

    print_factors(number);
}