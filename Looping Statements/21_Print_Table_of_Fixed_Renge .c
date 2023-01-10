#include<stdio.h>
#include<conio.h>

int main()
{
      int r = 0, c = 0;

      printf("\n Table of 1 to 9 = \n");
      
      printf("\n ============= **** ============= \n\n");

      for(r = 1;r <= 10;r++)
      {
           for(c = 1;c <= 10;c++)
           {
               printf("%4d",r * c);
           }
           printf("\n");
      }
      
      printf("\n ============= **** ============= \n");
      
      printf("\n Thanks !!!\n");

      getch();
      return 0;
}