#include<stdio.h>
#include<conio.h>

int main()
{
   int No1 = 0,No2 = 0,Mult = 0;
   
   printf("\n Enter First Number =");
   scanf("%d",&No1);
   printf("\n Enter Second Number =");
   scanf("%d",&No2);
  
   Mult = No1 *  No2;
   
   printf("\n Multiplication of Two Numbers = %d",Mult);
   
   getch();
   return 0;
 }