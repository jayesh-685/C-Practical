#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int n;
	int product = 1;
	printf("Enter number:");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		product = product*i;
	}

	printf("Factorial is %d", product);
	
	return 0;
}

