#include <stdio.h>

int main(void) {
    int i, num;
    int arr[10];

    num = 6;

    for (i=0; i < 5; i++) {
        arr[i] = i * 2;
    }
    arr[5] = 100;

    for (i=0; i < 6; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}