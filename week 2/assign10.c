#include<stdio.h>
#include<string.h>
int main()
{
    int i,a=0,d=0,sc=0,l;
    char s[100];
    printf("Enter a string\n");
    scanf("%s", s);
    l= strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]>='A'&s[i]<='Z' || s[i]>='a'&s[i]<='z')
          a++;
        else if(s[i]>='0'& s[i]<='9')
         d++;
        else
         sc++;

    }
    printf("Number of alphabets = %d\n", a);
    printf("Number of digits = %d\n", d);
    printf("Number of special charaters = %d\n", sc);
}