#include <stdio.h>
int main () {
	
	int i, j, k;
	int matrix[3][3] = {
	
	{12, 34, 56},
	{72, 4, 6},
	{90, 67, 12}
	};
	int highest = matrix[0][0];
	
	for(i=0; i<3; i++){
		for(j = 0; j< 3; j++){
			 if (matrix[i][j] > highest) {
                highest = matrix[i][j];
                k=i;
            }
		}
		
		
	}
	    printf("\nThe highest value in the matrix is: %d\n", highest);
	    printf("Index: %d", k);

	return 0;
}
