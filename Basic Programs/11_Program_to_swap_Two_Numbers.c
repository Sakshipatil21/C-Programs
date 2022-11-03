#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,Temp = 0;
   
    printf("\n Enter First Number = ");
    scanf("%d",&No1);
    printf("\n Enter Second Number = ");
    scanf("%d",&No2);
   
    printf("\n\n *********************************************** \n");
   
    printf("\n\n Value of Given Number is Before Swap => \n\n Number 1 = %d, Number 2 = %d\n",No1,No2);
   
    Temp = No1;
    No1 = No2;
    No2= Temp;
   
    printf("\n\n Value of Given Number is After Swap => \n\n Number 1 = %d, Number 2 = %d\n",No1,No2);
   
    printf("\n\n *********************************************** \n");
   
    printf("\n Thanks !!!");
   
    getch();
    return 0;
}
