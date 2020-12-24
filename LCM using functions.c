#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LCM(int a, int b);

int main()
{
	int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    
    printf("LCM of %d and %d is %d", a, b, LCM(a, b));
     
    return 0;
}

int LCM(int a, int b)
{
	int max = (a>b)?a:b;
	
	while(true)
	{
		if(max%a == 0 && max%b == 0)
			break;
		max++;
	}
	return max;
}


