#include<stdio.h>
#include<conio.h>

int main()
{
  int Num = 0;
  
  printf("\n Enter An Integer Number = ");
  scanf("%d",&Num);
  
  if(Num % 2 == 0)
  {
      printf("\n Given Number Is EVEN.");
  }
  else
  {
      printf("\n Given Number Is ODD.");
  }
  
  getch();
  return 0;
}
