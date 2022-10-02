#include<stdio.h>
#include<conio.h>

int main()
{
   int Num = 0,Temp = 0,Fact = 0;
   
   printf("\n Enter a Number To Find Factorial = ");
   scanf("%d",&Num);
   
   Fact = 1;
   Temp = Num;
   
   while(Temp > 1)
   {
      Fact = Fact * Temp;
      Temp --;
   }
   
   printf("\n Factorial Of %d = %d",Num,Fact);
   
   printf("\n\n Thanks !!!!");
   
   getch();
   return 0;
}