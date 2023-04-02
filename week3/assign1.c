#include <stdio.h>
#include <string.h>
 
int main()
{
  	char s[100], ch;
  	int i, len, j;
 
  	printf("Enter a String\n");
  	gets(s);
  	
  	printf("Enter the Character that you want to Remove\n");
  	scanf("%c", &ch);
  	
	len = strlen(s);
	   	
  	for(i = 0; i < len; i++)
	{
		if(s[i] == ch)
		{
			for(j = i; j < len; j++)
			{
				s[j] = s[j + 1];
			}
			len--;
			i--;	
		} 
	}	
	printf("The Final String after Removing All Occurrences of '%c' = %s ", ch, s);
	
  	return 0;
}