#include <stdio.h> 
int main() {
	float basic, da,ta, gross;
	printf("Enter Basic Salary:");
	scanf("%f",&basic);
	da= 0.10*basic;
	ta= 0.12*basic;
	gross= basic+ta+da;
	printf("Gross salary= %f", gross); 

return 0;
}

