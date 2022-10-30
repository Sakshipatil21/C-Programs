#include<stdio.h>
#include<conio.h>

int main()
{
         int iStart = 0,iEnd = 0,i = 0;

         printf("\n Enter Starting Number = ");
         scanf("%d",&iStart);

         printf("\n Enter Ending Number = ");
         scanf("%d",&iEnd);

         while(iStart <= iEnd)
         {
             for(i = 2; i < iStart; i++)
             {
                  if(iStart % i == 0)
                  {
                       break;
                  }
                  else
                  {
                       continue;
                  }
             }
             if(i == iStart)
             {
                  printf("\n %d",iStart);
             }
             iStart++;
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
