#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	int a = 0, b = 1, c = 1, i, n;
	
	scanf("%d", &n);
	
	if(n == 1)
		printf("0");
		
	if(n == 2)
		printf("0 1");
		
	if(n >= 3)
	{
		printf("0\n1\n");
		for(i = 3; i <= n; i++)
		{
		printf("%d\n", c);
		
		a = b;
		b = c;
		c = a + b;
		}	
	}	
	
	
	return 0;
}

