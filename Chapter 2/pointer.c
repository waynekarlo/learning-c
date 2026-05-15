#include <stdio.h>

void swap(int *ptr1, int *ptr2){
    int temp;
    
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(void) {
    int x = 10;
    int y = 99;

    printf("Before swap: x = %d, y = %d\n", x, y);  

    swap(&x, &y);

    printf("After swap:  x = %d, y = %d (Should be x = 99, y = 10)\n", x, y);

    return 0;
}