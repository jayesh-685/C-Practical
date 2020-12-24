#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	printf("Entered number is %s", n%2==0?"even":"odd");	
    return 0;
}

