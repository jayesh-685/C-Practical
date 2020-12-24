#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	
	printf("Enter number:");
	scanf("%d", &n);
	
	do
	{
		printf("%d * %d = %d\n", n, i, n*i);
		i++;
	}
	while(i <= 10);
	
	return 0;
}

