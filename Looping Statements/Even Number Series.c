#include<stdio.h>
#include<conio.h>

int main()
{
   int iStart = 0,iEnd = 0;
   
   printf("\n Enter Starting Number = ");
   scanf("%d",&iStart);
   
   printf("\n Enter Ending Number = ");
   scanf("%d",&iEnd);
   
   while(iStart <= iEnd)
   {
      if(iStart % 2 == 0)
      {
          printf("\n\n %d",iStart);
      }
      iStart ++;
   }
   printf("\n\n Thanks !!!!");
   
   getch();
   return 0;
}