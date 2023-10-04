#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void drawHalfDiamond(int n) {
	int i, j;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = n - 1; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);




	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	drawHalfDiamond(n);








	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
