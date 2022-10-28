#include<stdio.h>
#include<conio.h>

int main()
{
   int Num = 0,Cnt = 0;
   
   printf("\n Enter Any Number  = ");
   scanf("%d",&Num);
   
   for(Cnt = Num;Cnt >= 1;Cnt--)
   {
       printf("\n %d",Cnt);
   }
   
   printf("\n\n Thanks !!!");
   
   getch();
   return 0;
}
