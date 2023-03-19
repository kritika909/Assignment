#include<stdio.h>
int frequency(int*, int, int);
int main()
{
    int i,f,n, size;
    printf("Enter size of array");
    int arr[size];
    scanf("%d", &size);
    printf("Enter elements of the array\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter a number\n");
    scanf("%d", &n);
    f= frequency(arr,n, size);
    printf("Frequency of %d is %d", n, f);
}
int frequency(int a[], int b, int s)
{
    int j,x=0;
    for(j=0; j<s; j++)
    {
        if(a[j]==b)
         x++;
    }
    return x;
}