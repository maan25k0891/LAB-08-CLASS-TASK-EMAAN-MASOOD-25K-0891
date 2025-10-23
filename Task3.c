#include <stdio.h>

int main() {
    int rows = 5, columns = 5;
    char seat[5][5];
    int students = 0, empty = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if ((i + j) % 2 == 0) {
                seat[i][j] = 'x'; 
                students++;
            } else {
                seat[i][j] = 'o'; 
                empty++;
            }
        }
    }
    printf("Classroom Seating Chart:\n");
    printf("========================\n");
    printf("(x = Student, o = Empty)\n\n");

    for (int i = 0; i < rows; i++) {
        printf("Row %d ", i + 1);
        for (int j = 0; j < columns; j++) {
            printf("%c ", seat[i][j]);
        }
        printf("\n");
    }

    printf("\nSummary:\n");
    printf("Students seated: %d\n", students);
    printf("Empty desks: %d\n", empty);
    printf("Total desks: %d\n", rows * columns);

    return 0;
}

