#include <stdio.h>
#include <conio.h>
#include<string.h>
int main() 
{
	int i;
	char s1[10],s2[10];
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>s2[i])
		{
			printf("%s is greater",s1);
		
		}
		else if(s1[i]<s2[i])
		{
			printf("%s is greater",s2);
		}
		else
		{
			printf("both are equal");
		
		}
	}
  getch();
	return 0;
}
