#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	if(n%5==0 && n%8==0){
		printf("Enter number is divisible by both 5 and 8");
	}
	else if(n%5==0 && n%8!=0){
		printf("Enter number is divisible by 5 only");
	}
	else if(n%5!=0 && n%8==0){
		printf("Enter number is divisible by 8 only");
	}
	else{
		printf("Entered number is neither divisible by 5 nor by 8");
	}
	
    return 0;
}

