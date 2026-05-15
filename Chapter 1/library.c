#include <stdio.h>
#include <string.h>

struct bookT {
    char title[50];
    char author[50];
    int pub_year;
    float price;
};

int add_book(struct bookT library[], int current_count){
        printf("Please enter the title: ");
        scanf("%s", library[current_count].title);
        printf("Please enter the author's name: ");
        scanf("%s", library[current_count].author);
        printf("Please enter the publication year: ");
        scanf("%d", &library[current_count].pub_year);
        printf("Please enter the price: ");
        scanf("%g", &library[current_count].price);
        return current_count + 1;
}
void display_all(struct bookT library[], int current_count){
    int i;
    for(i = 0;i < current_count; i++){
        printf("\n Name: %s\n Author: %s\n Publication Year: %d\n Price: %g\n\n", library[i].title, library[i].author, library[i].pub_year, library[i].price);
    }
}

void search_author(struct bookT library[], char authors[] ,int current_count){
    int i = 0;
    for(i = 0;i < current_count; i++){
        if (strcmp(authors, library[i].author) == 0){
            printf("\n Name: %s\n Author: %s\n Publication Year: %d\n Price: %g\n\n", library[i].title, library[i].author, library[i].pub_year, library[i].price);
        }
    }
}

int main(void){
    struct bookT library[100];
    char authors[50];
    int book_count = 0;
    int choice = 0;
    int i = 0;
    while(1) {
        printf("=== Main Menu ===\n 1. Add a new book\n 2. Display all books\n 3. Search by author\n 4. Exit\n Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1){
            book_count = add_book(library, book_count);
        }
        else if (choice == 2){
            display_all(library, book_count);
        }
        else if (choice == 3){
            printf("Enter the author's name: ");
            scanf("%s",authors);
            search_author(library, authors, book_count);
        }
        else if (choice == 4){
            return 0;
        }

    }

}