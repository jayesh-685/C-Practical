#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter first integer:");
	scanf("%d", &a);
	printf("Enter second integer:");
	scanf("%d", &b);

	printf("Sum is %d\n", a+b);
	printf("Product is %d\n", a*b);
	printf("Difference is %d\n", a-b);
	printf("Division is %f\n", a/(float)b);
	return 0;
}
