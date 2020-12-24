// used to shift bits when numbers are represented in binary form
#include <stdio.h>
#include <math.h>
int main(){
	int b;
	b=6; //b=0000 0110
	printf("%d\n", b<<1);		//now b=0000 1100 i.e. b=12
	printf("%d", b>>1);			//now b=0000 0011 i.e. b=3
	return 0;
}
