//A
//AB
//ABC
//ABCD
//ABCDE

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
          for(c = 1,ch = 'A';c <= cnt; c++)
          {
               if(r >= c)
               {
                  printf("%2c",ch);
                  ch++;
               }
          }
          printf("\n");
      }

      printf("\n Thanks !!!");

      getch();
      return 0;
}