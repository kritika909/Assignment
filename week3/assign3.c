#include<stdio.h>
int main()
{
    int x, y, *n1, *n2, sum;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    n1=&x;
    n2=&y;
    sum = *n1+ *n2;
    printf("%d + %d = %d", *n1, *n2, sum);
}