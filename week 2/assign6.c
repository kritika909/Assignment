#include<stdio.h>
int main()
{
    int s,i,c,index,max,j;
    printf("Enter size of array\n");
    scanf("%d", &s);
    int a[s];
    printf("Enter elements of array\n");
    for(i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<s; i++)
    {
        for(j=0; j<s; j++)
        {
            if(a[i]==a[j])
             c++;
        }
        if(c>max)
        {
            max=c;
            index=i;
        }
        c=0;
    }
    printf("Maximum occuring element = %d", a[index]);
}