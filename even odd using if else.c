#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	if(n%2==0){
		printf("Entered number is even");
	}
	else if(n%2==1){
		printf("Entered number is odd");
	}
	
		
	
    return 0;
}

