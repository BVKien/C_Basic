#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, j, rows, count=0;
	printf("Enter the number of rows\n");
	scanf("%d", &rows);




	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i = 0; i < 2*rows; i=i+2) {
		for (j = 0; j <= i; j++) {
			printf("%c", 'A'+count);
			if(j < i/2)
				count++;
			else
				count--;
		}
		count = 0;
		printf("\n");
	}









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
