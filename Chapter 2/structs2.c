#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cart {
    char *book_title;
    struct Cart *next;
} Cart;

int main(void){
    Cart *cart1, *cart2, *cart3;
    int length = 0;
    
    cart1 = malloc(sizeof(Cart));
    length = strlen("Dune") + 1;
    cart1->book_title = (char *)malloc(sizeof(char) * length);
    
    if (cart1 == NULL){
        printf("Bad malloc!");
        exit(1);
    }

    strlcpy(cart1->book_title, "Dune", length);
    
    cart2 = malloc(sizeof(Cart));
    length = strlen("1984") + 1;
    cart2->book_title = (char *)malloc(sizeof(char) * length);

    if (cart2 == NULL){
        printf("Bad malloc!");
        exit(1);
    }

    strlcpy(cart2->book_title, "1984", length);

    cart3 = malloc(sizeof(Cart));
    length = strlen("Emma") + 1;
    cart3->book_title = (char *)malloc(sizeof(char) * length);

    if (cart3 == NULL){
        printf("Bad malloc!");
        exit(1);
    }

    strlcpy(cart3->book_title, "Emma", length);

    cart1->next = cart2;
    cart2->next = cart3;
    cart3->next = NULL;

    printf("%s\n", cart1->next->next->book_title);

    free(cart3->book_title);
    free(cart3);
    free(cart2->book_title);
    free(cart2);
    free(cart1->book_title);
    free(cart1);

    cart3 = NULL;
    cart2 = NULL;
    cart1 = NULL;
}