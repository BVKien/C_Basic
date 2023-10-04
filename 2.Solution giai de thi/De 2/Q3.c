#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int countFactors(int number) {
	int count = 0;

	int sqrt_number = (int)sqrt(number);
	int i;
	for (i = 1; i <= sqrt_number; i++) {
		if (number % i == 0) {
			count++;
			if (i != (number / i)) {
				count++;
			}
		}
	}

	return count;
}


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int number;

	scanf("%d", &number);

	if (number <= 0) {
		;
		return 1;
	}

	int numFactors = countFactors(number);






	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d\n",numFactors);









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}

