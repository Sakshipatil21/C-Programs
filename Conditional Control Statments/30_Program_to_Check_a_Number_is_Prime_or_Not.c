#include<stdio.h>
#include<conio.h>

int main()
{
  int Num = 0,Cnt = 0;
  
  Up:
    printf("\n\n ============ ***** ============ \n");
    
    printf("\n Enter Positive Integer Number = ");
    scanf("%d",&Num);
    
    if(Num <= 1)
    {
       printf("\n Invalid Number.");
       getch();
       goto Up;
    }
    
    for(Cnt=2;Cnt<Num;Cnt++)
    {
       if(Num % Cnt == 0)
       {
          break;
       }
    }
    if(Cnt == Num)
    {
       printf("\n %d is Prime Number.",Num);
    }
    else
    {
       printf("\n %d is Not Prime Number.",Num);
    }
    
    printf("\n\n ============ ***** ============");
    
    printf("\n\n\t\t\t\t\t\t\t\t\t Thanks !!!");
    
    getch();
    return 0;
}
