//15
//20 25
//30 35 40
//45 50 55 60
//65 70 75 80 85

#include<stdio.h>
#include<conio.h> 

int main() 
{
     int r = 0,c = 0,cnt = 0,num = 3;
   
     printf("\n Enter Count of Rows and Columns = ");
     scanf("%d",&cnt);
    
     printf("\n Pattern is => \n\n");
   
     for(r = 1;r <= cnt;r++) 
     {
         for(c = 1;c <= cnt;c++) 
         {
             if(r >= c)
             {
                printf("%3d",5*num);
                num++;
             }
         }
         printf("\n");
     }
    
     printf("\n Thanks !!!");
    
     getch();
     return 0;
}
