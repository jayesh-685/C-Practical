#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int checkPrime(int);
void printPrime(int, int);

int main()
{
    int startInterval, endInterval;
    printf("Enter interval:");
    scanf("%d %d", &startInterval, &endInterval);

    printPrime(startInterval, endInterval);

    return 0;
}

int checkPrime(int n)
{
	int i = 2;
	bool isPrime = true;

	while(i*i <= n)
	{
		if(n%i == 0)
			isPrime = false;

		i++;
	}

	return isPrime;
}

void printPrime(int startInterval, int endInterval)
{
    int i = 0;
    for(i = startInterval; i <= endInterval; i++)
    {
        if(checkPrime(i) == true)
            printf("%d, ", i);
    }
}

