//A
//D G
//J M P
//S V Y B
//E H K N Q

#include<stdio.h>
#include<conio.h>

int main()
{
     int r = 0,c = 0,cnt = 0;
     char ch = 'A';
      
     printf("\n Enter Count Of Rows and Columns = ");
     scanf("%d",&cnt);

     printf("\n Pattern is =>\n\n");

     for(r = 1;r <= cnt;r++)
     {
          for(c = 1;c <= cnt;c++)
          {
                if(r >= c )
                {
                    printf("%2c",ch);
                    ch += 3;
                }
                if(ch > 'Z')
                {
                    ch = ch - 26;
                } 
          }
          printf("\n");
     }

     printf("\n Thanks !!!\n");

     getch();
     return 0;
}