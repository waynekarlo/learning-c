#include <stdio.h>

int max(int x, int y){
    int bigger;

    if (y > x) {
        bigger = y;
    }
    printf(" in max, before return x: %d y: %d\n", x, y);
    return bigger;
}

int main(void){
    int val1, val2, result;

    printf("Enter first value: ");
    scanf("%d", &val1);
    printf("Enter second value: ");
    scanf("%d", &val2);

    result = max(val1, val2);
    printf("%d\n", result);
}