#include <stdio.h>
#include <stdlib.h>


int main()
{
	float a;
	int b;
	printf("Enter number and power");
	scanf("%f %d", &a, &b);
	
	float product = 1;
	int counter = 1;
	
	for(counter = 1; counter <= b; counter++)
	{
		product = product*a;
	} 
	
	printf("Answer is %.2f", product);
	
    return 0;
}

