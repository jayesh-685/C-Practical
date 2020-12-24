#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	bool prime = true;
    int n;
    int i = 2;
    printf("Enter number:");
    scanf("%d", &n);
    
    do
    {
    	if(n%i==0)
    		prime = false;
    	i++;
	}
	while(i < n);
	
	if(n == 1)
		printf("1 is neither prime nor composite");
	
	else if(prime == true)
		printf("Entered number is prime");
		
	else
		printf("Entered number is not prime");
    return 0;
}

