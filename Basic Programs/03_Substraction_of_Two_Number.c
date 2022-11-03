#include<stdio.h>
#include<conio.h>

int main()
{
   int No1 = 0,No2 = 0,Sub = 0;
   
   printf("\n Enter First Number = ");
   scanf("%d",&No1);
   printf("\n Enter Second Number = ");
   scanf("%d",&No2);
  
   Sub = No1 - No2;
   
   printf("\n Substraction of Two Numbers = %d",Sub);
   
   getch();
   return 0;
 }
