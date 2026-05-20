#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int *arr;
    int n;
    int sum = 0;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n); 
    if (arr == NULL){
        printf("Bad malloc!");
        exit(1);
    }
    
    for (int i = 0;i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];    
    }
    free(arr);
    arr = NULL;
    printf("%d\n", sum);
    return 0;
}