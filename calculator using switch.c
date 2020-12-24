#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	char o;
	printf("Enter number 1:");
	scanf("%f", &a);
	printf("Enter the operation:");
	scanf(" %c", &o);
	printf("Enter number 2:");
	scanf("%f", &b);
	switch(o)
	{
		case'+':
			printf("Answer is %.2f", a+b);
			break;
		case'-':
			printf("Answer is %.2f", a-b);
			break;
		case'*':
			printf("Answer is %.2f", a*b);
			break;	
		case'/':
			printf("Answer is %.2f", (float)a/b);
			break;
		default:
			printf("Invalid operation");	
	}
	return 0;
}
