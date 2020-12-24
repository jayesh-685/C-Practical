#include <stdio.h>
#include <stdlib.h>

void printFibonacci(int n);

int main()
{
    int numberOfTerms = 0;
    scanf("%d", &numberOfTerms);

    printFibonacci(numberOfTerms);

    return 0;
}

void printFibonacci(int numberOfTerms)
{
    int a = 0, b = 1, c, i;
	for (i = 1; i <= numberOfTerms; ++i)
	{
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }


}

