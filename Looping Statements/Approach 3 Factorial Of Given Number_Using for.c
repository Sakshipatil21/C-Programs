#include<stdio.h>
#include<conio.h>

int main()
{
   int Num = 0,Temp = 0,Fact = 0;
   
   printf("\n Enter a Number to Find Factorial => ");
   scanf("%d",&Num);
   
   for(Fact = 1,Temp = Num;Temp > 1;Temp --)
   {
      Fact = Fact * Temp;
   }
   printf("\n Factorial Of Given Number %d = %d",Num,Fact);
   
   printf("\n\n Thanks !!!");
   
   getch();
   return 0;
}