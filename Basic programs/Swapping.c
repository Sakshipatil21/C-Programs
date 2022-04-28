#include<stdio.h>
#include<conio.h>
int main()
{
   int No1=0,No2=0,Temp=0;
   
   printf("Enter First Number=");
   scanf("%d",&No1);
   printf("Enter Second Number=");
   scanf("%d",&No2);
   
   printf("Values of Given Number is Before Swap=>\n Number 1 = %d, Number 2 = %d\n",No1,No2);
   
   Temp = No1;
   No1 = No2;
   No2= Temp;
   
   printf("Values of Given Number is After Swap=>\n Number 1 = %d, Number 2 = %d\n",No1,No2);
   
   getch();
   return 0;
}