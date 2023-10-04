#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j + 1] > a[j]) {
				swap(&a[j + 1], &a[j]);
			}
		}
	}
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	int i, a[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}




	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	sort(a, n);
	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			printf("%d ", a[i]);
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i] % 2) {
			printf("%d ", a[i]);
		}
	}









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
