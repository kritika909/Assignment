#include<stdio.h>
int main()
{
    int s,i,j,temp;
    printf("Enter size of array\n");
    scanf("%d",&s);
    int arr[s];
    printf("Enter elements of array\n");
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<s; i++)
    {
     for(j=0; j<s; j++)
     {
        if(arr[j+1]<0 & arr[j]>=0)
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        temp=0;
     }
    }
    printf("Sorted array\n");
    for(i=0; i<s; i++)
    {
        printf("%d ", arr[i]);
    }
}