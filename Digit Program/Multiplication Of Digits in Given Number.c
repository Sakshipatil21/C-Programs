#include<stdio.h>
#include<conio.h>

int main()
{
         int No = 0, Dig = 0, dMult = 1, Temp = 0;

         Up:
             printf("\n Enter Positive Integer Number to Calculate Multiplication  => ");
             scanf("%d",&No);

             if(No <= 0)
             {
                 printf("\n Invalid Number. Please Enter Positive Integer Number.");
                 getch();
                 system("cls");
                 goto Up;
             }

             Temp = No;
             
             while(Temp > 0)
             {
                 Dig =  Temp%10;
                 dMult = dMult* Dig;
                 Temp = Temp/10;
             }

             printf("\n Multiplication of Digits in Given Number %d is = %d\n",No,dMult);

             getch();
             return 0;
}