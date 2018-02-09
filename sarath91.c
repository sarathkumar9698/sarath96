#include<stdio.h>
#include<coni.h>
int main(void)
{
  int sum,num,res=1,i;
  scanf("%d",&num);
  scanf("%d",&sum);
  for(i=1;i<=sum;i++)
  {
    res=res*num;
  }
  printf("%d",res);
  getch();
}
