#include<stdio.h>
#include<stdlib.h>

void swap(int a, int b);

int main()
{
    int a, b;
    printf("Enter a and b\n");
    scanf("%d %d", &a, &b);

    swap(a, b);

    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;

    printf("a = %d\n", a);
    printf("b = %d", b);

}

