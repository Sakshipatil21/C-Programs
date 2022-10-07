#include<stdio.h>
#include<conio.h>

int main()
{
   int i = 0,Values[3] = {0};
   
   for(i = 0;i < 3;i ++)
   {
      printf("\n Enter Element No %d = ",i + 1);
      scanf("%d",&Values[i]);
   }
   printf("\n PRESS KEY TO MOVE AHEAD.");
   getch();
   
   printf("\n\n Elements in Array are => \n\n");
   
   for(i = 0;i < 3;i ++)
   {
      printf("\n Values of %d Element = %d",i + 101,Values[i]);
   }
   getch();
   return 0;
}