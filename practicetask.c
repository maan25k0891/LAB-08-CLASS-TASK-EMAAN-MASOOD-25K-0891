#include <stdio.h>

int main() {
    int i, j;
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {2, 5, 3},
        {8, 6, 2},
        {2, 2, 2}
    };

    int sum[3][3]; 

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    printf("The sum of the two arrays is :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
