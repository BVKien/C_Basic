#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int check(int n) {
	int sum =1,i;
	for(i=2; i*i<=n; ++i) {
		if(n%i == 0) {
			if(i!= n/i) {
				sum += i + n/i;
			} else {
				sum +=i;
			}
		}
	}
	return sum == n;
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d",&n);








	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf((check(n)) ?"%d is a perfect number" : "%d is not a perfect number",n);













	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
