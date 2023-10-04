#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void separateOddEven(int arr[], int n, int oddArr[], int *oddCount, int evenArr[], int *evenCount) {
	*oddCount = 0;
	*evenCount = 0;

	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] % 2 == 0)
			evenArr[(*evenCount)++] = arr[i];
		else
			oddArr[(*oddCount)++] = arr[i];
	}
}

void sortArray(int arr[], int n) {
	int temp;
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n, i, j, k, l;

	scanf("%d", &n);

	int arr[n];

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int oddArr[n], evenArr[n];
	int oddCount, evenCount;

	separateOddEven(arr, n, oddArr, &oddCount, evenArr, &evenCount);

	sortArray(evenArr, evenCount);
	sortArray(oddArr, oddCount);

	i = 0;
	for (j = 0; j < evenCount; j++)
		arr[i++] = evenArr[j];
	for (k = 0; k < oddCount; k++)
		arr[i++] = oddArr[k];





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for (l = 0; l < n; l++) {
		printf("%d ", arr[l]);
	}









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
