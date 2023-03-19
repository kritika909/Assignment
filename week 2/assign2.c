#include<stdio.h>
int main()
{
    int s1,s2,i,s3,j;
    printf("Enter size of array1\n");
    scanf("%d", &s1);
    printf("Enter size of array2\n");
    scanf("%d", &s2);
    s3=s1+s2;
    int a[s1], b[s2], c[s3];
    printf("Enter elements of array1\n");
    for(i=0; i<s1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of array2\n");
    for(i=0; i<s2; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<s1; i++)
    {
        c[i]=a[i];
    }
    for(i=0,j=s1; i<s2 &&j<s3; i++, j++)
    {
        c[j]=b[i];
    }
    printf("Merged Array\n");
    for(i=s3-1; i>=0; i--)
    {
        printf("%d ",c[i]);
    }


}