#include<stdio.h>

int main(){
	int i, j, num;
	
	printf("Enter a number of your choice: ");
	scanf("%d", &num);
	
	for( i = 1; i<= num; i++){
		    printf("%5d: ", i);
		    
		    	for( j = 1; j<= num; j++){
		    printf("%5d", i*j);

	}
	printf("\n");
}
	
	return 0;
	
}
