//A
//BB
//CCC
//DDDD
//EEEEE

#include<stdio.h>
#include<conio.h>

int main()
{
      int r = 0, c = 0, cnt = 0;
      char ch = 'A';

      printf("\n Enter Count of Rows and Columns = ");
      scanf("%d",&cnt);

      printf("\n Pattern is => \n\n");

      for(r = 1; r <= cnt; r++)
      {
          for(c = 1;c <= cnt; c++)
          {
               if(r >= c)
               {
                  printf("%2c",ch);
               }
          }
          printf("\n");
          ch++;
      }

      printf("\n Thanks !!!");

      getch();
      return 0;
}