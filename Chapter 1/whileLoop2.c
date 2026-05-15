#include <stdio.h>

int main(void){
    int data;

    while (1) {
        printf("Enter a number between 0 - 100: ");
        scanf("%d", &data);
        if((data >= 0) && (data <= 100)){
            break;
        }
        else{
            printf("%d is not a value between 0 - 100!\n", data);
        }
    }
    printf("The value read is: %d\n", data);
    return 0;
}