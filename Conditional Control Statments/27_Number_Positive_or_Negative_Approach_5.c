#include<stdio.h>
#include<conio.h>

int main()
{
  int Num = 0;
  
  Up:
    printf("\n\n Enter a Number = ");
    scanf("%d",&Num);
    
    if(Num == 0)
    {
       printf("\n %d is Neutral Number.\n\n Please Enter Another Number = ",Num);
       goto Up;
    }
    
    (Num > 0) ? printf("\n %d is Positive Number.",Num) : printf("\n %d is Negative Number.",Num);
    
    printf("\n\n Thanks !!!");
    
    getch();
    return 0;
}
