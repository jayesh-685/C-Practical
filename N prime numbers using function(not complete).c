#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Prime(int n);
void printPrime(int N);

int main()
{
    int N;
    scanf("%d", &N);
    
    printf("\n");
    
    printPrime(N);
     
    return 0;
}

int Prime(int n)
{
	int i = 2;
	bool isPrime = true;
	
	while(i*i <= n)
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

void printPrime(int N)
{
	int count = 0, number = 2;
    
    while(count < N)
    {
    	if(Prime(number) == 1)
    	{
    		printf("%d\n", number);
    		count++;
		}
    	number++;	
	}
	
}
