#include<stdio.h>
#include<conio.h>

int main()
{
   int No = 0,Dig = 0,Cnt = 0,Temp = 0;
   
   Up:
     printf("\n\n Enter Positive Integer Number To Count Of Even Number = ");
     scanf("%d",&No);
     
     if(No <= 0)
     {
        printf("\n Invalid Number.");
        getch();
        goto Up;
     }
     
     Temp = No;
     
     while(Temp > 0)
     {
        Dig = Temp % 10;
        
        if(Dig % 2 == 0 && Dig > 0)
        {
           Cnt ++;
        }
        Temp = Temp / 10;
     }
     printf("\n Count Of Even Number in %d is = %d",No,Cnt);
     
     getch();
     return 0;
}
