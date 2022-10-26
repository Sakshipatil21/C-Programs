#include<stdio.h>
#include<conio.h>

int main()
{
   int No = 0,Cnt = 0;
   
   printf("\n Enter a Number To Print It's Table = ");
   scanf("%d",&No);
   
   printf("\n -------- **** --------");
   Cnt = 1;
   do
    {
       printf("\n\n %d",No * Cnt);
       Cnt++;
    }while(Cnt <= 10);
    
    printf("\n\n ------- **** --------");
    
    printf("\n\n Thanks !!!");
    
    getch();
    return 0;
}
