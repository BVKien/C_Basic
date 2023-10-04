#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void countOddEven(int arr[], int size, int *oddCount, int *evenCount) {
	*oddCount = 0;
	*evenCount = 0;
	int i;
	for (i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			(*evenCount)++;
		} else {
			(*oddCount)++;
		}
	}
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int arr[100];
	int size = 5, i;

	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	int oddCount, evenCount;
	countOddEven(arr, size, &oddCount, &evenCount);





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d\n", evenCount);
	printf("%d\n", oddCount);









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
