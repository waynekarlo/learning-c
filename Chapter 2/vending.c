#include <stdio.h>

enum Beverage {COLA,SPRITE,WATER,COFFEE};

int main(void){
    enum Beverage choice = WATER;

    switch (choice){
        case 0:
            printf("Cola is $2.00\n");
            break;
        case 1:
            printf("Sprite is $2.00\n");
            break;
        case 2:
            printf("Water is $1.00\n");
            break;
        case 3:
            printf("Coffee is $4.00\n");
            break;
        default:
            printf("Invalid selection!\n");
            break;
    }
}