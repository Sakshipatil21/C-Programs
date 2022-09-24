#include<stdio.h>
#include<conio.h>

int main()
{
   int r = 0,c = 0;
   
   printf("\n Pattern is => \n\n");
   
   for(r=1;r<=4;r++)
   {
      for(c=1;c<=5;c++)
      {
        printf(" * ");
      }
      printf("\n");
   }
   return 0;
}
