#include<stdio.h>
int main()
{
    int s,i;
    printf("Enter size of array\n");
    scanf("%d", &s);
    int a[s], b[s];
    printf("Enter elements of array\n");
    for(i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<s; i++)
    {
        b[i]=a[i];
    }
    printf("Copied Array\n");
    for(i=0; i<s; i++)
    {
        printf("%d ",b[i]);
    }


}