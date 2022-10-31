#include<stdio.h>
#include<conio.h>

int main()
{
   int r = 0,c = 0,cnt = 0;
   
   printf("\n Enter Odd Number For Count Of Rows And Columns = ");
   scanf("%d",&cnt);
   
   printf("\n Pattern is => \n\n");
   
   for(r = 1;r <= cnt;r ++)
   {
      for(c = 1;c <= cnt;c ++)
      {
         if(r == cnt / 2 + 1 || c == cnt / 2 + 1)
         {
            printf(" * ");
         }
         else
         {
            printf("   ");
         }
      }
      printf("\n");
   }
   printf("\n\n Thanks !!!!");
   
   getch();
   return 0;
}
