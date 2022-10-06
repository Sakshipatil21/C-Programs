#include<stdio.h>
#include<conio.h>

int main ()
{
  int r = 0,c = 0,rCnt =.0;
  
  printf("\n\n Enter a Number = ");
  scanf("%d",&rCnt);
  
  printf("\n");
  
  for(r=1;r<=rCnt;r++)
  {
    for (c=1;c<=rCnt;c++)
    {
      if(r==1||r==rCnt||c==1)
      {
      printf(" * ");
      }
      else
      {
      printf("   ");
      }
    }
    printf("\n");
  }
  printf("\n\n Thanks !!!");
  
  getch();
  return 0;
 }