#include <stdio.h>
#include <conio.h>
void main()
{
   int i=0,No=0;
   printf("\n Enter The Number To Check Whether It Is Prime Or Not=");
   scanf("%d",&No);
   
   for(i=2;i<No;i++)
   {
      if(No%i==0)
      {
          break;
      }
   }
   if(i==No)
   {
      printf("\n Prime Number");
   }
   else
   {
      printf("\n Not Prime Number");
   }
}