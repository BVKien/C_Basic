#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void displayStringsContainingKeyword(char *strings[], int numStrings, char *keyword) {
	int i;
	for (i = 0; i < numStrings; i++) {
		if (strstr(strings[i], keyword) != NULL) {
			printf("%s\n", strings[i]);
		}
	}
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char *strings[100];
	char keyword[100];
	int numStrings;

	scanf("%d", &numStrings);
	getchar();

	int i;
	for (i = 0; i < numStrings; i++) {
		strings[i] = (char *)malloc(100 * sizeof(char));
		scanf("%s", strings[i]);
	}
	getchar();

	scanf("%s", keyword);




	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	displayStringsContainingKeyword(strings, numStrings, keyword);
	for (i = 0; i < numStrings; i++) {
		free(strings[i]);
	}










	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
