#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter a number\n");
    scanf("%d", &n);
    do
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }while(n!=0);
    printf("Sum of its digits=%d",sum);
}