#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter the number of days you are late to return the book:");
	scanf("%d", &n);
	if(n>0 && n<=5){
		printf("Your fine is 50 paisa");
	}
	else if(n>=6 && n<=10){
		printf("Your fine is 1.5 rupee");
	}
	else if(n>10 && n<=30){
		printf("Your fine is 6.5 rupees");
    }
	else if(n>30){
		printf("Your membership is cancelled");	
	}
    return 0;
}

