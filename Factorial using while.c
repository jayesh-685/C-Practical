#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
	int product = 1;
	int i = 1;

	printf("Enter number:");
	scanf("%d", &n);

	while(i <= n)
    {
        product = product*i;
        i++;
    }
    printf("Factorial is %d", product);

    return 0;
}

