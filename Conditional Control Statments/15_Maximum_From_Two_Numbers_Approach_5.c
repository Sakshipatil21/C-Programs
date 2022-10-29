#include<stdio.h>
#include<conio.h>

int main()
{
  int Num1 = 0,Num2 = 0;
  
  Accept:
        printf("\n Enter Two Numbers To Fine Maximum From Them : ");
        scanf("%d%d",&Num1,&Num2);
        
        if(Num1 == Num2)
        {
          printf("\n Both Numbers Are Equal");
          printf("\n\n ======================== ***** ========================");
          
          printf("\n\n For Comparison There Should Be Two Different Numbers \n");
          goto Accept;
        }
        if(Num1 > Num2)
        {
          printf("\n Given First Number Is Maximum",Num1);
        }
        else
        {
          printf("\n Given Second Number Is Maximum",Num2);
        }
        printf("\n\n Thanks !!!");
        
        getch();
        return 0;
}
