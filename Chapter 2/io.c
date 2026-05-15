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
    
    length = strlen("Dune") + 1;
    cart1 = malloc(sizeof(Cart));
    
    if(cart1 == NULL){
        printf("Bad malloc!");
        exit(1);
    }


    cart1->book_title = (char *)malloc(sizeof(char) * length);

    strlcpy(cart1->book_title, "Dune", length);
    
    length = strlen("1984") + 1;
    cart2 = malloc(sizeof(Cart));
    
    if(cart2 == NULL){
        printf("Bad malloc!");
        exit(1);
    }
    
    cart2->book_title = (char *)malloc(sizeof(char) * length);

    strlcpy(cart2->book_title, "1984", length);

    length = strlen("Emma") + 1;
    cart3 = malloc(sizeof(Cart));
    
    if(cart3 == NULL){
        printf("Bad malloc!");
        exit(1);
    }

    cart3->book_title = (char *)malloc(sizeof(char) * length);

    strlcpy(cart3->book_title, "Emma", length);

    cart1->next = cart2;
    cart2->next = cart3;
    cart3->next = NULL;

    FILE *mycart;

    mycart = fopen("trolley_log.txt", "w");
    if (mycart == NULL) {
        printf("Error file not found!");
        exit(1);
    }
    Cart *current = cart1;

    while (current != NULL) {
        fprintf(mycart, "Book Title: %s\n", current->book_title);
        current = current->next;
    }

    fclose(mycart);
    
    free(cart3->book_title);
    free(cart3);
    free(cart2->book_title);
    free(cart2);
    free(cart1->book_title);
    free(cart1);
    
    cart1 = NULL;
    cart2 = NULL;
    cart3 = NULL;
    
}