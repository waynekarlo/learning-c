#include "difference_of_squares.h"
#include <stdio.h>

unsigned int square_of_sum(unsigned int max_number) {
    unsigned int accumulator = 0;
    unsigned int i;
    for(i = 1;i <= max_number; i++){
        accumulator = accumulator + i;   
    }
    accumulator = accumulator * accumulator;
    return accumulator;
}

unsigned int sum_of_squares(unsigned int max_number){
    unsigned int accumulator = 0;
    unsigned int i;
    for(i = 1;i <= max_number; i++){
        accumulator = accumulator + i * i;
    }
    return accumulator;
}
unsigned int difference_of_squares(unsigned int max_number){
    unsigned int result = 0;
    unsigned int sqrofsum = 0;
    unsigned int sumofsqr = 0;
    sqrofsum = square_of_sum(max_number);
    sumofsqr = sum_of_squares(max_number);
    result = sqrofsum - sumofsqr;
    return result;
}