#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	int a[n], i, j;
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i] > a[j]) {
				swap(&a[i], &a[j]);
			}
		}
	}
	for(i=0; i<n; i++) {
		if(a[i] != a[i-1]) {
			printf("%d ", a[i]);
		}
	}









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
