#include <stdio.h>

void print_array(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
}

int main(void) {
    int val;
    int size = 10;
    int arr[10];
    
    for (val = 0; val < 10; val++){
        arr[val] = val * 2;
    }
    print_array(arr,size);
}