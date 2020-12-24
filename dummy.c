#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double minutes,years,days;
    printf("Enter minutes:");
    scanf("%lf", &minutes);
    days=minutes/1440;
    years=days/365;
    printf("%lf minutes are equivalent to %lf days and %lf years", minutes, days, years);




    return 0;
}

