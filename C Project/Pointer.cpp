#include <stdio.h>

// pass-by-reference : the way pointer work
// pass-by-value

int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("Gia tri cua bien a : %d\n", a);
	printf("Dia chi cua bien a[0] : %d", &a[0]);
	
	return 0;
}
