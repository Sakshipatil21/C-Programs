#include<stdio.h>
#include<conio.h>

int main()
{
   int Num = 0,Temp = 0,Rem = 0,Rev = 0;
   
   printf("\n Enter an Integer Number = ");
   scanf("%d",&Num);
   
   Temp = Num;
   
   if(Num > 0)
   {
     while(Temp > 0)
     {
        Rem = Temp % 10;
        Rev = Rev * 10 + Rem;
        Temp = Temp / 10;
     }
   }
   else
   {
     while(Temp < 0)
     {
        Rem = Temp % 10;
        Rev = Rev * 10 + Rem;
        Temp = Rem / 10;
     }
   }
   printf("\n Reverse Number %d is = %d",Num,Rev);
   
   printf("\n\n Thanks !!!");
   
  getch();
  return 0;
}