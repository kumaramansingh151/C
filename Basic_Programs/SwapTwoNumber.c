#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("enter the number a=");
    scanf("%d", &a);
    printf("enter the number b=");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swap \n a=%d \nb=%d ", a, b);
    return 0;
}