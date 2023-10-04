#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


char *convert(char *a) {
	a[0] = toupper(a[0]);
	a[1] = toupper(a[1]);
	return a;
}
void change(char *a) {
	char *token = strtok(a," ");
	while(token != NULL) {
		token = convert(token);
		printf("%s ",token);
		token = strtok(NULL," ");
	}
	printf("\n");
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char a[100];
	gets(a);







	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:


	change(a);







	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
