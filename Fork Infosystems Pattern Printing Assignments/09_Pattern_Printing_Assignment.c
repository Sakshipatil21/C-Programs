//2
//2 4
//2 4 6
//2 4 6 8
//2 4 6 8 10

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
         for(c = 1,num = 1;c <= cnt;c++,num++) 
         {
             if(r >= c)
             {
                printf("%3d",2*num);
             }
         }
         printf("\n");
     }
    
     printf("\n Thanks !!!");
    
     getch();
     return 0;
}
