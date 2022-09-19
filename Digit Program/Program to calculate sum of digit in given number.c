#include<stdio.h>
#include<conio.h>
int main()
{
   int No=0,Dig=0,Dsum=0,Temp=0;
   
   up:
     printf("\n Enter Positive Integer Number To Calculate Its Digit Sum=");
     scanf("%d",&No);
     
     Temp = No;
     
     if(No<0)
     {
       printf("\n Invalid Input.....");
       goto up;
     }
     while(Temp > 0)
     {
       Dig = Temp %10;
       Dsum = Dsum + Dig;
       Temp = Temp / 10;
     }
     printf("\n\n Sum of digit in given number %d = %d",No,Dsum);
     
     getch();
     return 0;
}