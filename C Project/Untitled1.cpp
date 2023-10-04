#include <stdio.h>
#include <conio.h>
#define PI 3.141592
const int PI1 = 3.141593;
const double PI2 = 3.14593;
const int MAXINT1 = 12;
const int MAXINT2 = 10;
const char MAXCHAR1 = 'Z';
const char MAXCHAR2 = 'A';

int main(){
	/*
	char c1 = 'A';
	printf("Hello everyone");
	int n= 258;
	printf("\nEnter any key to continue...");
	*/
	
	/*
	char c1 = 'A';
	char c2 = 65;
	char c3 = 0x41;
	char c4 = 0101;
	printf("%c, %c, %c, %c\n", c1, c2, c3, c4);
	*/
	
	/*
	printf("\a");
	printf("He said that \"I love you\"\n ");
	printf("She say 'A'\n");
	printf("My file: C:\t1\t111\new_year.txt");
	*/
	
	/*
	+ Named Constants
	- Use the pre-processor (pre-complied directive) #define or keyword const
	printf("%d\n", PI*3*3);
	printf("Non-type Constant: PI1: %d byte\n", sizeof(PI1));
	printf("Non-type Constant: MAXCHAR1: %d byte\n", sizeof(MAXCHAR1));
	printf("Non-type Constant: MAXCHAR2: %d byte\n", sizeof(MAXCHAR2));
	//getch();
	
	// MARCO
	printf("%lf\n", PI*3*3);
	*/
	
	/*
	int m;
	printf("Var. n, add:%u\n", &n);
	printf("Var. m, add:%u\n", &m);
	printf("main code, add:%u\n", &main);
	printf("Enter 2 integers:");
	scanf("%d%d", &n, &m);
	printf("Values entered: n=%d, m=%d\n", n, m);
	*/
	
	/*
	double x, y;
	printf("Enter an integer: ");
	scanf("%d", &n);
	printf("Enter 2 real numbers: ");
	scanf("%lf%lf", &x, &y);
	double num1, num2;
	char op;
	printf("Enter an expression + - / : ");
	scanf("%lf%c%lf", &num1, &op, &y);
	printf("Expression inputed is: %lf%c%lf\n", num1, op, num2);
	*/
	
	/*
	int n;
	char c;
	printf("Enter an integer: ");
	scanf("%d", &n);
	printf("Enter a character: ");
	scanf("%c", &c);
	getchar();
	*/
	
	/*
	//Exercise
	int a, b;
	float c, d;
	double e, f;
	printf("Enter values of 2 int a, b: "); scanf("%d%d", &a, &b);
	printf("Enter values of 2 float c, d: "); scanf("%f%f", &c, &d);
	printf("Enter values of 2 double e, f: "); scanf("%lf%lf", &e, &f);
	
	printf("\nValue and address of 2 int a, b: Value = %d, Address:%a", a, b);
	printf("\nValue and address of 2 float a, b: Value = %f, Address:%a", c, d);
	printf("\nValue and address of 2 double a, b: Value = %lf, Address:%a", e, f);
	*/
	
	/*
	// Expression Arthimetic Operations
	+x: y=+x <--> y=x: leaves the variable, constant or expression uncharged
	-x: y=-x: reverse the sign of the variable
	x+y, x-y
	x*y, x/y: Multiples values of two operands(toan hang) / Get the quotient of a division
	x%y: 18%3: Get remainder of a integral division
	++x, --x, x++, x--: Increase/decrease the value of a variable(prefix/postfix operators): toán tu tien to, hau to
	*/
	
	/**/
	int n= 30, m= 7;
	printf("%d, %d\n", n/m, n%m);
	int t= ++m;
	printf("Prefix increasing operator: t=%d, m=%d\n", t, m);
	int k= m++;
	printf("Postfix increasing operator: k%d, m=%d\n", k, m);
	getchar();
	
	
	
	
	
	printf("\nEnter any key to continue...");
	getchar();
	return 0;
}














