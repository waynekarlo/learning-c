#include <stdio.h>
#include <stdlib.h>

struct RareBook {
    int id_number;
    int page_count;
    float appraisal_value;
};

void enter_book(struct RareBook *RareBook1){
    printf("Welcome to the National Library Board of Singapore!\n");
    printf("Please enter the id number of the book: ");
    scanf("%d", &RareBook1->id_number);
    printf("Please enter the page count of the book: ");
    scanf("%d", &RareBook1->page_count);
    printf("Please enter the appraisal value of the book: ");
    scanf("%g", &RareBook1->appraisal_value);
}

void print_report(struct RareBook *RareBook1){
    printf("ID Number: %d\n", RareBook1->id_number);
    printf("Page Count: %d\n", RareBook1->page_count );
    printf("Appraisal Value: %g\n", RareBook1->appraisal_value);
}

int main(void){
    struct RareBook *RareBook1;

    RareBook1 = malloc(sizeof(struct RareBook) * 1);

    if (RareBook1 == NULL) {
        printf("Bad malloc!");
        exit(1);
    }

    enter_book(RareBook1);

    print_report(RareBook1);
    
    free(RareBook1);
    RareBook1 = NULL;
}