#include<stdio.h>
#include<conio.h>

int main()
{
      int r = 0,c = 0,S_num = 0,E_num = 0;

      printf("\n Enter Starting Number to Print Table = ");
      scanf("%d",&S_num);

      printf("\n Enter Ending Number to Print Table = ");
      scanf("%d",&E_num);

      printf("\n ============ **** ============ \n\n");

      for(r = 1; r <= 10; r++)
      {
           if(S_num < E_num)
           {
                for(c = S_num; c <= E_num; c++)
                {
                    printf("%4d",r * c);
                }
                printf("\n");
           }
           else
           {
                for(c = S_num; c >= E_num; c--)
                {
                   printf("%4d",r * c);
                }
                printf("\n");
           }
      }

      printf("\n ============ **** ============\n");
        
      printf("\n Thanks !!\n");

      getch();
      return 0;
}
