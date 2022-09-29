#include<stdio.h>
#include<conio.h>

int main()
{
  int Num = 0;
  
  printf("\n Enter an Integer Number to Check Whether it is Even or Odd = ");   
  Up:
  scanf("%d",&Num);
  
  if(Num == 0)
  {
     printf("\n Given Number is Neutral.\n\n Please Enter Other than Zaro Integer to Check Whether it is Even Or Odd = ");
     goto Up;
  }
  
  (Num % 2 == 0) ? printf("\n Given Number is Even.") : printf("\n Given Number is Odd.");
  
  printf("\n\n Thanks !!!");
  
  getch();
  return 0;
}
