#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char buffer[100];
    char *exact_title;
    int length = 0;
    
    printf("Please enter a one word book title: ");
    scanf("%s", buffer);

    length = strlen(buffer);

    exact_title = (char *) malloc(sizeof(char) * (length + 1));

    if (exact_title == NULL){
        printf("Bad malloc!");
        exit(1);
    }

    strlcpy(exact_title, buffer, length + 1);
    printf("%s and %s\n", exact_title, buffer);

    free(exact_title);
    exact_title = NULL;
}