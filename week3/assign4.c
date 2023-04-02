#include<stdio.h>
int main()
{
    int n, *p, fact=1, i;
    printf("Enter a number\n");
    scanf("%d", &n);
    p=&n;
    for(i=1; i<=*p; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d: %d", *p, fact);

}