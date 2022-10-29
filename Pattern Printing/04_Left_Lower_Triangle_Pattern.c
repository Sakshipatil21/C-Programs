#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0,c = 0,cnt = 0;
  
  printf("\n Enter Count of Rows & Columns = ");
  scanf("%d",&cnt);
  
  printf("\n\n Pattern is.....\n\n");
  
  for(r=1;r<=cnt;r++)
  {
    for(c=1;c<=cnt;c++)
    {
      if(r>=c)
      {
        printf(" * ");
      }
    }
    printf("\n");
  }

  getch();
  return 0;
}
