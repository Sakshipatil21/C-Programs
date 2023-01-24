//7
//14 21
//28 35 42
//49 56 63 70
//77 84 91 98 105

#include<stdio.h>
#include<conio.h> 

int main() 
{
     int r = 0,c = 0,cnt = 0,num = 1;
   
     printf("\n Enter Count of Rows and Columns = ");
     scanf("%d",&cnt);
    
     printf("\n Pattern is => \n\n");
   
     for(r = 1;r <= cnt;r++) 
     {
         for(c = 1;c <= cnt;c++) 
         {
             if(r >= c)
             {
                printf("%4d",7*num);
                num++;
             }
         }
         printf("\n");
     }
    
     printf("\n Thanks !!!");
    
     getch();
     return 0;
}
