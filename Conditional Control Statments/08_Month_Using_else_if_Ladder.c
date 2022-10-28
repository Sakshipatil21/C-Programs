#include<stdio.h>
#include<conio.h>

int main()
{
   int Month = 0;
   
   printf("\n Enter Number (1-12) to View Month =");
   scanf("%d",&Month);
   
   if(Month == 1)
   {
      printf("\n January");
   }
   else if(Month == 2)
   {
      printf("\n February");
   }
   else if(Month == 3)
   {
      printf("\n March");
   }
   else if(Month  == 4)
   {
      printf("\n April");
   }
   else if(Month == 5)
   {
      printf("\n May");
   }
   else if(Month == 6)
   {
      printf("\n June");
   }
   else if(Month == 7)
   {
      printf("\n July");
   }
   else if(Month == 8)
   {
      printf("\n August");
   }
   else if(Month == 9)
   {
      printf("\n September");
   }
   else if(Month == 10)
   {
      printf("\n October");
   }
   else if(Month == 11)
   {
      printf("\n November");
   }
   else if(Month == 12)
   {
      printf("\n December");
   }
   else
   {
      printf("\n Invalid Number Of Month");
   }
   
   getch();
   return 0;
   
   getch();
   return 0;
}
