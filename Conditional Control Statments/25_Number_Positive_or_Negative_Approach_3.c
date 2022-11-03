#include<stdio.h>
#include<conio.h>

int main()
{
  int Num = 0;
  
  printf("\n Enter a Number = ");
  scanf("%d",&Num);
  
  if(Num == 0)
  {
     printf("\n %d is Neutral Number.",Num);
     goto Down;
  }
  if(Num > 0)
  {
     printf("\n %d is Positive Number.",Num);
  }
  else
  {
     printf("\n %d is Negative Number.",Num);
  }
  
  Down:
  printf("\n\n Thanks !!!");
  
  getch();
  return 0;
  
}
