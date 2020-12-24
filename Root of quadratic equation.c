#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d;
	printf("Quadratic equation is of the form ax^2 + bx + c\n");
	printf("Enter a:");
	scanf("%lf", &a);
	printf("Enter b:");
	scanf("%lf", &b);
	printf("Enter c:");
	scanf("%lf", &c);
	d = (b*b) - (4*a*c);
	
	if(d<0)
	{
		printf("Roots are imaginary\n");
		double real,imaginary;
		d=-d;
		real=-b/2*a;
		imaginary=sqrt(d)/2*a;
		printf("r1 = %lf - i%lf\n", real, imaginary);
		printf("r2 = %lf + i%lf\n", real, imaginary);
	}
	
	else if(d==0)
	{
		printf("Roots are equal\n");
		double r=(-b)/2*a;
		printf("r1 = r1 = %lf", r);
	}
	
	else if(d>0)
	{
		printf("Roots are real\n");
		double x,y;
		x=-b/2*a;
		y=sqrt(d)/2*a;
		printf("r1 = %lf\n", x-y);
		printf("r2 = %lf\n", x+y);
	}
	
	return 0;
}
