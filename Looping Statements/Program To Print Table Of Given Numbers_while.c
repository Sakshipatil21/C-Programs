#include<stdio.h>
#include<conio.h>

int main()
{
   int No = 0,Cnt = 0;
   
   printf("\n Enter a Number to Print It's Table = ");
   scanf("%d",&No);
   
   Cnt = 1;
   printf("\n\n =========== ****** =========== \n");
   
   while(Cnt<=10)
   {
       printf("\n %d",No * Cnt);
       Cnt++;
   }
   
   printf("\n\n =========== ****** ===========");
   
   printf("\n\n Thanks !!!!");
   
   getch();
   return 0;
}