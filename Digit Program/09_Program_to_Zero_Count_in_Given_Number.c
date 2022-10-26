#include<stdio.h>
#include<conio.h>

int main()
{
   int No = 0,Dig = 0,zCnt = 0,Temp = 0;
   
   Up:
     printf("\n Enter Positive Integer Number To Count Of Zero = ");
     scanf("%d",&No);
     
     if(No <= 0)
     {
        printf("\n Invalid Number.");
        getch();
        goto Up;
     }
     
     Temp = No;
     
     while(Temp > 10)
     {
        Dig = Temp % 10;
        
        if(Dig == 0)
        {
           zCnt ++;
        }
        Temp = Temp / 10;
     }
     printf("\n Count Of Zero in %d is = %d",No,zCnt);
     
     printf("\n\n Thanks !!!!");
     
     getch();
     return 0;
}
