#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;
    
    printf("\n Enter an integer Number to check whether it is Even or Odd = ");
    up:
    scanf("%d",&Num);
    
    if(Num == 0)
    {
         printf("\n Given Number is Neutral.\n\n Please Enter other than 0 Integer to check whether it is Even or Odd.");
         goto up;
    }
    
    (Num % 2 == 0) ? printf ("\n Given Number is EVEN.") : printf("\n Given Number is ODD.");
    
    
    printf("\n Thanks!!!");
    
    getch();
    return 0;  
}