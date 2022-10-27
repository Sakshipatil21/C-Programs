#include<stdio.h>
#include<conio.h>

int main()
{
   int No = 0,Temp = 0,Dig = 0,zCnt = 0,Even_Count = 0,Odd_Count = 0;
   
   Up: 
     printf("\n\n Enter Positive Integer Number = ");
     scanf("%d",&No);
     
     Temp = No;
     
     if(No <= 0)
     {
        printf("\n Invalid Number.\n Please Enter Positive Integer Number.");
        getch();
        goto Up;
     }
     while(Temp > 0)
     {
        Dig = Temp % 10;
        if(Dig == 0)
        {
           zCnt ++;
        }
        else if(Dig %2 == 0)
        {
           Even_Count ++;
        }
        else
        {
           Odd_Count ++;
        }
        Temp = Temp / 10;
     }
     printf("\n Count Of Zero in %d = %d",No,zCnt);
     printf("\n\n Count Of Even Numbers in %d = %d",No,Even_Count);
     printf("\n\n Count Of Odd Numbers in %d = %d",No,Odd_Count);
     
     printf("\n\n Thanks !!!!");
     
     getch();
     return 0;
}
