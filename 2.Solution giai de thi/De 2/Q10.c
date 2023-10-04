#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	int i;
	long long fibo[n];
	fibo[0] = 0;
	fibo[1] = 1;





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("0 1 ");
	for (i = 2; i < n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		printf("%lld ", fibo[i]);
	}









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
