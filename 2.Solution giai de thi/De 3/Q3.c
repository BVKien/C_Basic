#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isLeapYear(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
				return 1;
			else
				return 0;
		} else
			return 1;
	} else
		return 0;
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int year;
	scanf("%d", &year);





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	if (isLeapYear(year))
		printf("%d is a leap year", year);
	else
		printf("%d is not a leap year", year);









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
