#include<stdio.h>
#include<conio.h>

int main()
{
   int Num1 = 0,Num2 = 0;
   
   printf("\n Enter First Number = ");
   scanf("%d",&Num1);
   
   printf("\n Enter Second Number = ");
   scanf("%d",&Num2);
   
   printf("\n\n Quotient = %d",Num1 / Num2);
   printf("\n\n Remainder = %d",Num1 % Num2);
   
   printf("\n\n Thanks !!!");
   
   getch();
   return 0;
}