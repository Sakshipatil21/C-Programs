#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
  int Num = 0;
  
  Up:
    printf("\n\n Enter a Number = ");
    scanf("%d",&Num);
    
    if(Num == 0)
    {
       printf("\n %d is Neutral Number.\n\n Please Enter Another Number.");
       goto Up;
    }
    if(Num > 0)
    {
       printf("\n %d is Positive Number.",Num);
    }
    else
    {
       printf("\n %d is Negative Number.",Num);
    }
    
    printf("\n\n Thanks !!!");
    
    getch();
    return 0;
}