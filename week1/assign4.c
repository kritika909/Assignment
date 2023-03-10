#include<stdio.h>
int main()
{
    float x,y,sum,diff,p,div;
    printf("Enter two numbers\n");
    scanf("%f %f", &x, &y);
    switch(1)
    {
        case 1:
        sum=x+y;
        printf("%f+%f=%f\n",x,y,sum);
        case 2:
        diff=x-y;
        printf("%f-%f=%f\n",x,y,diff);
        case 3:
        p=x*y;
        printf("%f*%f=%f\n",x,y,p);
        case 4:
        div=x/y;
        printf("%f/%f=%f\n",x,y,div);
        break;
        default:
        printf("Invalid Input");
    }
}