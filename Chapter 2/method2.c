#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int **seating_chart;
    int rows = 0;
    int cols = 0;
    int i = 0;
    int j = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    seating_chart = (int **)malloc(sizeof(int *) * rows);

    if(seating_chart == NULL) {
        printf("Bad malloc!");
        exit(1);
    }
    
    for (i = 0; i < rows; i++) {
        seating_chart[i] = (int *)malloc(sizeof(int) * cols);
    }

    if(seating_chart == NULL) {
        printf("Bad malloc!");
        exit(1);
    }

    for (i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            seating_chart[i][j] = 0;
        }
    }

    for (i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", seating_chart[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++){
        free(seating_chart[i]);
    }
    free(seating_chart);
    seating_chart = NULL;
}