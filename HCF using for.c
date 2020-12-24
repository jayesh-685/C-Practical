#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n1, n2, hcf;
	
	scanf("%d %d", &n1, &n2);
	
	int smaller = (n1 < n2)?n1:n2;
	
	for(i = 2; i <= smaller; i++)
	{
		if(n1 % i == 0 && n2 % i == 0)
		{
			hcf = i;
		}
	}
	
	printf("HCF of %d and %d is %d", n1, n2, hcf);
		
	return 0;
}

