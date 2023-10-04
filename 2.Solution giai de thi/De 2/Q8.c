#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	int arr[n];
	int i, j;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int unique_arr[n], unique_count = 0;
	for (i = 0; i < n; i++) {
		int is_duplicate = 0;
		for (j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				is_duplicate = 1;
				break;
			}
		}
		if (!is_duplicate) {
			unique_arr[unique_count] = arr[i];
			unique_count++;
		}
	}





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i = 0; i < unique_count; i++) {
		if (i == unique_count - 1) {
			printf("%d\n", unique_arr[i]);
		} else {
			printf("%d ", unique_arr[i]);
		}
	}









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
