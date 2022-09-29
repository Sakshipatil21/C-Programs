#include<stdio.h>
#include<conio.h>

int main()
{
  int Num = 0;
  
  Down:
      printf("\n\n Enter a Number = ");
      scanf("%d",&Num);
  
  if(Num == 0)
  {
     printf("\n %d is Neutral Number.",Num);
     goto Down;
  }
  if(Num % 2 == 0)
  {
     printf("\n %d is Even Number.",Num);
  }
  else
  {
     printf("\n %d is Odd Number.",Num);
  }
  
  printf("\n\n Thanks !!!");
  
  getch();
  return 0;
}