#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int unitDigit = 0, sum = 0;
    while(n != 0)
    {
        unitDigit = n%10;
        sum += unitDigit;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}

