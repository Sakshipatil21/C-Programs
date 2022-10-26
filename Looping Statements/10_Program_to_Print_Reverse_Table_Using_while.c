#include<stdio.h>
#include<conio.h>

int main()
{
   int No = 0,Cnt = 0;
   
   printf("\n Enter a Number To Print It's Reverse Table = ");
   scanf("%d",&No);
   
   Cnt = 10;
   
   while(Cnt >= 1)
   {
       printf("\n\n %d",No * Cnt);
       Cnt --;
   }
   
   printf("\n\n Thanks !!!");
   
   getch();
   return 0;
}
