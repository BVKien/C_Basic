#include <stdio.h>

int sumUp(int a, int b)
{
	int sum = a + b;
	return sum;
}

int main(){
	int sum=0;
//	for(int i=1; i<=100; i++){
//		sum += i;
//	};

//	int i=1;
//	while(i<=100){
//		sum+=i;
//		i++;
//	}

//	int i;
//	do
//	{
//		printf("i = ");
//		scanf("%d", &i);
//		sum+=i;
//		i++;
//	}while(i<=100);

	int a = 1;
	int b = 2;
	printf("Sum = %d", sumUp(a,b));

	printf("\n%d", sum);
}
