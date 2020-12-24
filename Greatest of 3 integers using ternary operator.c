#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 integers");
	scanf("%d %d %d", &a, &b, &c);
	/*int max1, max2;
	max1=(a>b)?a:b;
	max2=(c>max2)?c:max2;
	printf("Greatest integer is %d", max2);
	*/
	
	// using nested ternary operator
	int max;
	max = (a>b && a>c)?a:(b>a && b>c?b:c);
	printf("%d", max);
	return 0;
	
	
	 	
}
