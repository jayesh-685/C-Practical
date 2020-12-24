#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	bool prime = true;
    int n;
    int i;
    printf("Enter number:");
    scanf("%d", &n);
    
    for(i = 2; i < n; i++)
    {
    	if(n%i==0)
    		prime = false;
	}
	
	if(n == 1)
		printf("1 is neither prime nor composite");
	
	else if(prime == true)
		printf("Entered number is prime");
		
	else
		printf("Entered number is not prime");
    return 0;
}

