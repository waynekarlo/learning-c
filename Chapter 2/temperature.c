#include <stdio.h>
#include <stdlib.h>

int main(void){
    float *temperature;
    int count = 0;
    int i = 0;
    
    printf("How many days do you want to track?: " );
    scanf("%d", &count);
    
    temperature = (float *)malloc(sizeof(float) * count);

    if (temperature == NULL){
        printf("Bad malloc!");
        exit(1);
    }

    for (i = 0; i < count; i++){
        printf("Please enter the temperature for the day %d: ", i + 1);
        scanf("%g", &temperature[i]);
    }


    printf("Here is your report!\n");
    for(i = 0; i < count; i++){
        printf("The temperature for day %d is %g\n", i + 1, temperature[i]);
    }
    
    free(temperature);
    temperature = NULL;
}