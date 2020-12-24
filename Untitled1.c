#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int factorial(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
}

int factorial(int n)
{
	if(n>1)
		return n+factorial(n-1);
	else
		return 1;		
}
