#include <stdio.h>
#include <math.h>

int main(void) {
    int num = 2;
        
    while (guess != num){
        printf("%d is not the right number\n", guess);
        printf("Enter another guess: ");
        scanf("%d", &guess);
    }

}
