#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
	int product = 1;
	int i = 1;

	printf("Enter number:");
	scanf("%d", &n);

	do
	{
		product = product*i;
		i++;
	}
	while(i <= n);
	
	printf("Factorial is %d", product);
    return 0;
}

