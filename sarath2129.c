#include <stdio.h>
#include<conio.h>
#include<time.h>
int main() 
{
	int m,hr,mins;
	scanf("%d",&m);
	hr=m/60;
	mins=m%60;
	printf("%d %d",hr,mins);
	getch();
	return 0;
}
