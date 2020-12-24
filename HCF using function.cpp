#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int HCF(int a, int b);

int main()
{
	int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    
    printf("HCF of %d and %d is %d", a, b, HCF(a, b));
     
    return 0;
}

int HCF(int a, int b)
{
	int i, hcf;
	int smaller = (a < b)?a:b;
	
	for(i = 2; i <= smaller; i++)
	{
		if(a%i == 0 && b%i == 0)
		{
			hcf = i;
		}
	}
		
	return hcf;
}

