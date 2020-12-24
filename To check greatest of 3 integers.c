#include <stdio.h>
int main(){
	int a, b, c;
	printf("Enter 3 integers");
	scanf("%d %d %d", &a, &b, &c);
	if(a>=b && a>=c){
		printf("Greatest integer is %d", a);
	}
	else if(b>=a && b>=c){
		printf("Greatest integer is %d", b);
	}
	else{
		printf("Greatest integer is %d", c);
	}
	
}
