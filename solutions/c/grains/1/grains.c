#include "grains.h"
#include <stdio.h>
#include <stdint.h>

uint64_t square(uint8_t num){
    int i = 0;
    uint64_t accumulator = 1;
    if (num == 0){
        return 0;
    }
    else {
        for(i = 0; i < num - 1; i++){
        accumulator = accumulator * 2;
        }
    }
    printf("%ld", accumulator);
    return accumulator;
}
uint64_t total(void){
    int total = 0;
    for (int i = 1; i < 64; i++){
        total += square(i);
    }
    return total;
}