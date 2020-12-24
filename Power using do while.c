#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	float a;
	int b;
	printf("Enter number and power:");
	scanf("%f %d", &a, &b);
	
	float product = 1;
	int counter = 1;
	
	do
	{
		product = product*a;
		counter++;
	} 
	while(counter <= b);
	
	if(b == 0)
		printf("%d", 1);
	
	else
	printf("Answer is %.2f", product);
	
    return 0;
}

