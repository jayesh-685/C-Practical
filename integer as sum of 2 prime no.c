#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void checkCondition(int n);
int checkPrime(int n);

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    checkCondition(n);

    return 0;
}

void checkCondition(int n)
{
    int num1 = 2;
    while(num1 < n/2)
    {
        if(checkPrime(num1) && checkPrime(n-num1))
        {
            printf("%d = %d + %d\n", n, num1, n-num1);
        }

        num1++;
    }

}

int checkPrime(int n)
{
	int i = 2;

	while(i < n)
	{
		if(n%i == 0)
        {
            return 0;
        }
        i++;
	}

	return 1;
}

