#include <stdio.h>
 #include<conio.h>
int main()
{
   int x, y, temp;
 
  
   scanf("%d%d", &x, &y);
 
   printf("Before Swapping\nx = %d\ny = %d\n",x,y);
 
   temp = x;
   x    = y;
   y    = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n",x,y);
    getch();
   return 0;
}
