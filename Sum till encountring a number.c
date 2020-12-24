#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0, sum = 0;
	
	while(n != -999)
	{
		sum += n;
		scanf("%d", &n);
	}
	
	printf("Sum till now = %d", sum);
	
	return 0;
}

