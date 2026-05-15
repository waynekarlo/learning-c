#include <stdio.h>

int main(void){
    int i, size = 0;

    int my_arr[10];

    for(i = 0; i < 10; i++){
        my_arr[i] = i;
        size++;
    }

    my_arr[3] = 100;

    printf("Array of %d items:\n", size);

    for (i = 0; i < 10; i++){
        printf("%d\n", my_arr[i]);
    }

    return 0;
}