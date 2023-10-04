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
	int n, i;
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int min_odd = -1, max_odd = -1;
	for (i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			if (min_odd == -1 || arr[i] < arr[min_odd]) {
				min_odd = i;
			}
			if (max_odd == -1 || arr[i] > arr[max_odd]) {
				max_odd = i;
			}
		}
	}
	if (min_odd != -1 && max_odd != -1) {
		swap(&arr[min_odd], &arr[max_odd]);
	}






	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}










	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}

