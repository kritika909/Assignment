#include<stdio.h>
int main()
{
    int r,d;
    float ar,circum;
    printf("Enter radius of the circle\n");
    scanf("%d", &r);
    d=r+r;
    printf("Diameter=%d\n",d);
    ar=3.14*r*r;
    printf("Area=%f\n",ar);
    circum=2*3.14*r;
    printf("Circumference=%f\n",circum);
}