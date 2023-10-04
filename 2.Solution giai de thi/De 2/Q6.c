#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char input[101];
	fgets(input, sizeof(input), stdin);





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	int i;
	for (i = 0; input[i] != '\0'; i++) {
		if (isalpha(input[i]) || isspace(input[i])) {
			printf("%c", input[i]);
		}
	}









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
