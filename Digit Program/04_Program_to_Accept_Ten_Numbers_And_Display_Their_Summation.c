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
  printf("\n Press Any key to Get Summation of Given Numbers.");
  
  printf("\n\n Summation of Given Number = %d",Sum);
  
  getch();
  return 0;
}
