#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	a=8;
	b=4;
	double divisor;
	divisor = (a%b==0?a:b);
	printf("%d", divisor);
	return 0;
}
