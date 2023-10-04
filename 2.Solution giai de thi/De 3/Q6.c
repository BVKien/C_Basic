#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[100];
	gets(s);
	int i;





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<strlen(s); i++) {
		if(isupper(s[i])) {
			s[i] = tolower(s[i]);
		} else {
			s[i] = toupper(s[i]);
		}
	}
	printf("%s",s);









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
