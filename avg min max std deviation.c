#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	// reading numbers
	int a,b,c,d,e;
	printf("Enter 5 number:");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	// calculating average
	double sum;
	double average;
	sum = a+b+c+d+e;
	average = sum/5;
	printf("Average of given numbers is %lf\n\n", average);
	
	// calculating max 
	
	float max;
	max = a;
	max = b>max?b:max;
	max = c>max?c:max;
	max = d>max?d:max;
	max = e>max?e:max;
	
	printf("Maximum value is %f\n\n", max);
	
	// calculating min 
	
	float min;
	min = a;
	min = b<min?b:min;
	min = c<min?c:min;
	min = d<min?d:min;
	min = e<min?e:min;
	
	printf("Maximum value is %f\n\n", min);
	
	// calculating standard deviation
	
	double n1 = (average-a)*(average-a);
	double n2 = (average-b)*(average-b);
	double n3 = (average-c)*(average-c);
	double n4 = (average-d)*(average-d);
	double n5 = (average-e)*(average-e);
	double n = n1+n2+n3+n4+n5;
	double x = n/5;
	double standardDeviation = sqrt(x);
	
	printf("Standard deviation is %lf", standardDeviation);
	
	return 0;
	
}

