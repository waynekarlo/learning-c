#include <stdio.h>
#include <stdlib.h>

void print_mystery_data(void *data, char type){
    int num;
    char letter;
    if(type == 'i'){
        num = *((int *)data);
        printf("%d\n", num);
    }
    if(type == 'c'){
        letter = *((char *)data);
        printf("%c\n",letter);
    }
}
int main(void){
    int x = 42;
    char letter = 'Z';
    print_mystery_data(&x, 'i');
    print_mystery_data(&letter, 'c');
}