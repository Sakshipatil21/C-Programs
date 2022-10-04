#include<stdio.h>
#include<conio.h>

int main()
{
   int No = 0,Dcnt = 0,Temp = 0;
   
   Up:
     printf("\n\n Enter Positive Integer Number To Calculate Number Of Digits = ");
     scanf("%d",&No);
     
     if(No <= 0)
     {
        printf("\n Invalid Number. \n Please Enter Positive Integer Number.");
        getch();
        goto Up;
     }
     
     Temp = No;
     
     while(Temp > 0)
     {
        Dcnt ++;
        Temp = Temp / 10;
     }
     printf("\n\n Number Of Digits In Given Number %d is = %d",No,Dcnt);
     
     printf("\n\n Thanks !!!");
     
     getch();
     return 0;
}