#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPrime(int n) {
	int i;
	if (n < 2) {
		return 0;
	}
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int rows;
	scanf("%d", &rows);
	int prime[1000], cnt = 0;





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	int i, j;
	for (i = 0; i < 1000; i++) {
		if (isPrime(i)) {
			prime[cnt] = i;
			++cnt;
		}
	}
	int number = 0;
	for (i = rows; i > 0; i--) {
		for (j = 1; j <= i; ++j) {
			printf("%d ", prime[number]);
			++number;
		}
		printf("\n");
	}









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
