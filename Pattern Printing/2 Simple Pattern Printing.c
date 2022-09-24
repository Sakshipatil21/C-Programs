#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0,c = 0,rcnt = 0,ccnt = 0;
  
  printf("\n Enter Row Count =");
  scanf("%d",&rcnt);
  
  printf("\n Enter Column Count =");
  scanf("%d",&ccnt);
  
  printf("\n Pattern is =>\n\n");
  
  for(r=1;r<=rcnt;r++)
  {
    for(c=1;c<=ccnt;c++)
    {
        printf(" * ");
    }
    printf("\n");
  }

  getch();
  return 0;
}
