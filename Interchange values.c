#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Enter a and b:");
	scanf("%d %d", &a, &b);
	c=b;
	b=a;
	a=c;
	printf("a=%d, b=%d", a, b);
	
	return 0;
}
// another way is thorugh + and -
// something like x=x+y y=x-y
