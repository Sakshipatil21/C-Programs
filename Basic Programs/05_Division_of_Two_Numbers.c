#include<stdio.h>
#include<conio.h>

int main()
{
   int No1 = 0,No2 = 0,Div = 0;
   
   printf("\n Enter First Number = ");
   scanf("%d",&No1);
   printf("\n Enter Second Number = ");
   scanf("%d",&No2);
  
   Div = No1 / No2;
   
   printf("\n Division of Two Numbers = %d",Div);
   
   getch();
   return 0;
 }
