#include "leap.h"
#include <stdio.h>

bool leap_year(int year){
    if (year % 4 == 0){
        if(year % 100 == 0){
            if (year % 400 == 0){
                printf("Leap year!");
                return true;
            }
        }
        else {
        printf("Leap year!");
        return true;
    }
}
    else{
        printf("Not a leap year!");
        return false;
    }
    return false;
}
