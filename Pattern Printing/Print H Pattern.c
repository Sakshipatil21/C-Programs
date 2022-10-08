#include<stdio.h>
#include<conio.h>

int main()
{
   int c = 0,r = 0,rcnt = 0;
   
   printf("\n Enter a Number = ");
   scanf("%d",&rcnt);
   
   printf("\n");
   
   for(r = 1;r <= rcnt;r ++)
   {
     for(c = 1;c <= rcnt;c ++)
     {
        if(c == 1 || c == rcnt || r == rcnt / 2 + 1)
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
   getch();
   return 0;
}