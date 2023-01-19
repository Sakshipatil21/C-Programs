//1
//2  3
//4  5  6
//7  8  9  10
//11 12 13 14 15

#include <stdio.h>

int main() 
{
     int r,c,cnt,num = 1;
   
     printf("\n Enter Count of Rows and Columns = ");
     scanf("%d",&cnt);
    
     printf("\n Pattern is => \n\n");
   
     for(r = 1;r <= cnt;r++) 
     {
         for(c = 1;c <= cnt;c++) 
         {
             if(r >= c)
             {
                printf("%3d",num);
                num++;
             }
         }
         printf("\n");
     }
    
     printf("\n Thanks !!!");
    
     getch();
     return 0;
}
