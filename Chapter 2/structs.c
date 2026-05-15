#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct WaitlistNode {
    char *patron_name;
    int ticket_number;
    struct WaitlistNode *next;
}  WaitlistNode; 

int main (void){
    int length = 0;
    WaitlistNode *patron1, *patron2;

    patron1 = malloc(sizeof(WaitlistNode));
    if (patron1 == NULL){
        printf("Bad malloc!");
        exit(1);
    }

    length = strlen("Alice") + 1;

    patron1->patron_name = malloc(sizeof(char) * length);

    strlcpy(patron1->patron_name, "Alice", length);
    patron1->ticket_number = 1;
    patron1->next = NULL;

    patron2 = malloc(sizeof(WaitlistNode));
    if (patron2 == NULL) {
        printf("Bad malloc!");
        exit(1);
    }

    length = strlen("Bob") + 1;

    patron2->patron_name = malloc(sizeof(char) * length);

    strlcpy(patron2->patron_name, "Bob", length);
    patron2->ticket_number = 2;
    patron2->next = patron1;

    printf("Your name: %s \n Ticket Number: %d\n", patron2->next->patron_name, patron2->next->ticket_number);

    free(patron2->patron_name);
    free(patron2);
    free(patron1->patron_name);
    free(patron1);

    patron1 = NULL;
    patron2 = NULL;
}