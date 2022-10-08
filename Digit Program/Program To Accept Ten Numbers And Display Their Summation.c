#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0,Sum=0,Cnt=0;
  
  printf("\n Enter Ten Numbers => ");
  
  for(Cnt=1;Cnt<=10;Cnt++)
  {
    printf("\n\n Enter Number %d = ",Cnt);
    scanf("%d",&No);
    
    Sum = Sum + No;
  }
  printf("\n Press any key to get summation of given numbers.");
  
  printf("\n\n Summation of given number = %d",Sum);
  
  getch();
  return 0;
}
