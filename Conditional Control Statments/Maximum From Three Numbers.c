#include<stdio.h>
#include<conio.h>

int main()
{
   int Num1 = 0,Num2 = 0,Num3 = 0;
   
   Up:
     printf("\n\n =========== ***** =========== \n");
     
     printf("\n Enter First Integer Number = ");
     scanf("%d",&Num1);
     
     printf("\n Enter Second Integer Number = ");
     scanf("%d",&Num2);
     
     printf("\n Enter Third Integer Number = ");
     scanf("%d",&Num3);
     
     if(Num1 == Num2 && Num2 == Num3)
     {
         printf("\n All Numbers Are Equal.");
         getch();
         goto Up;
     }
     
     if(Num1 > Num2 && Num1 > Num3)
     {
         printf("\n %d is Greater Number.",Num1);
     }
     else if(Num2 > Num1 && Num2 > Num3)
     {
         printf("\n %d is Greater Number.",Num2);
     }
     else if(Num3 > Num1 && Num3 > Num2)
     {
         printf("\n %d is Greater Number.",Num3);
     }
     else
     {
         printf("\n Invalid Number");
     }
     
     printf("\n\n =========== ***** ===========");
     
     printf("\n\n Thanks !!!");
     
     getch();
     return 0;
}