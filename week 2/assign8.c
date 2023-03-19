#include<stdio.h>
#include<string.h>
int main()
{
    int i,v=0,c=0,l;
    char s[100];
    printf("Enter a string\n");
    scanf("%s", s);
    l= strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]>='A'&s[i]<='Z' || s[i]>='a'&s[i]<='z')
        { 
          if(s[i]=='A'|| s[i]=='a'|| s[i]=='E'|| s[i]=='e'|| s[i]=='I'|| s[i]=='i'|| s[i]=='O'|| s[i]=='o'|| s[i]=='U'|| s[i]=='u')
           v++;
          else
           c++;
        }
    }
    printf("Number of vowels = %d\n", v);
    printf("Number of consonants = %d\n", c);
}