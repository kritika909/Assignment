#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],c1,c2;
    int l,i,n=0,j;
    printf("Enter a string\n");
    gets(s);
    l=strlen(s);
    c1='A';
    c2='a';
    for(j=1; j<=26; j++)
    {
       for(i=0; i<l; i++)
       {
          if(s[i]==c1 || s[i]==c2)
           n++;  
        }
        printf("frequency of %c: %d\n",c1, n );
        n=0;
        c1++; 
        c2++;
    } 
}