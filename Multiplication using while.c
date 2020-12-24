#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	
	printf("Enter number:");
	scanf("%d", &n);
	
	while(i <= 10)
	{
		printf("%d * %d = %d\n", n, i, n*i);
		i++;
	}
	
	return 0;
}

