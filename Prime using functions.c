#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Prime(int n);

int main()
{
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);
    
    if(Prime(n) == 1)
    	printf("Entered number is prime");
    
    else if(Prime(n) == 0)
    	printf("Entered number is not prime");

    return 0;
}

int Prime(int n)
{
	int i = 2;
	bool isPrime = true;
	
	while(i <= n/2)
	{
		if(n%i == 0)
			isPrime = false;
			
		i++;
	}
	
	if(isPrime == false)
		return 0;
	
	else if(isPrime == true)
		return 1;
}
