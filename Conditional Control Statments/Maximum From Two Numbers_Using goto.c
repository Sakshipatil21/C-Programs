#include<stdio.h>
#include<conio.h>

int main()
{
  int Num1 = 0,Num2 = 0;
  
  printf("\n Enter Two Integer Numbers To Find Maximum From Them :");
  scanf("%d%d",&Num1,&Num2);
  
  if(Num1 == Num2)
  {
     printf("\n Both Numbers Are Equal");
     goto BYE;
  }
  if(Num1 > Num2)
  {
     printf("\n Given First Number Is Maximum",Num1);
  }
  else
  {
     printf("\n Given Second Number Is Maximum",Num2);
  }
  BYE:
      printf("\n\n Thanks !!!");
      
  getch();
  return 0;
}