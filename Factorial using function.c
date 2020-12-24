#include<stdio.h>
#include<stdlib.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);

    printf("Factorial is %d", factorial(n));

    return 0;
}

int factorial(int n)
{
	int product = 1, i = 1;
	while(i <= n)
	{
		product *= i;
		i++;
	}
	
	return product;
}
