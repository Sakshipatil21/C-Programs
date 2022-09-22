#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0,Sum=0,Cnt=0;
  
  printf("\n Enter 10 Numbes=>");
  
  for(Cnt=1;Cnt<=10;Cnt++)
  {
    printf("\n\t Enter Number %d =",Cnt);
    scanf("%d",&No);
    
    Sum = Sum + No;
  }
  printf("\n Press any key to get summation of given numbers=>");
  
  getch();
  clrscr();
  
  printf("\n Summation of given numbes= %d",Sum);
}