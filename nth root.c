#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	printf("Enter the number whose root you want to calculate:");
	scanf("%f", &a);
	printf("Enter the power to which you want to calculate the root:");
	scanf("%f", &b);
	c = pow(a,1/b);
	printf("Answer is %f", c);
	return 0;
}
