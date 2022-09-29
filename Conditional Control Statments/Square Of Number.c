#include<stdio.h>
#include<conio.h>

int main()
{
  int Num = 0;
  
  Up:
  printf("\n ============ ***** ============ \n");
  
  printf("\n Enter Positive Integer Number = ");
  scanf("%d",&Num);
  
  if(Num <= 0)
  {
      printf("\n Invalid Number.\n\n Please Enter Another Number");
      getch();
      goto Up;
  }
  
  printf("\n Square Of %d = %d",Num,Num*Num);
  
  printf("\n\n ============= ***** ============ \n");
  
  printf("\n Thanks !!!");
  
  getch();
  return 0;
}
