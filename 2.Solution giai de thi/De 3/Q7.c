#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int rows;
	scanf("%d", &rows);
	int a[rows][rows], i, j;
	for(i=0; i<rows; i++) {
		for(j=0; j<rows; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int sum = 0;





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<rows; i++) {
		for(j=0; j<rows; j++) {
			if(i == j) {
				sum += a[i][j];
			}
		}
	}
	printf("%d", sum);









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
