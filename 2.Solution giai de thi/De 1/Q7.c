#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int Search(int *a, int n, int x){
	int i;
	for(i =0;i<n;++i){
		if(a[i] == x) return i;
	}
	return -1;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,sum,i;
scanf("%d",&n);
int a[n];
for(i =0;i<n;++i){
	scanf("%d",&a[i]);
}
scanf("%d",&sum);
int idx1=0,idx2=0;
for(i= 0;i<n;++i){
	if(Search(a,n,sum - a[i]) != -1){
		idx1 = i;
		idx2 = Search(a,n,sum - a[i]);
		break;
	}
}


  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%d\n%d",idx1,idx2);











  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
