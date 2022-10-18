#include<stdio.h>
#include<conio.h>

int main()
{
   int i = 0,Bill_Sum = 0,Bill[4] = {0};
   
   for(i = 0 ; i < 4 ; i++)
   {
      printf("\n Enter Bill No %d = ",(i + 1));
      scanf("%d",&Bill[i]);
      
      Bill_Sum = Bill_Sum + Bill[i];
   }
   
   getch();
   
   printf("\n Bills Generated Today => \n");
   
   for(i = 0 ; i < 4 ; i++)
   {
      printf("\n Amount in Bill No %d = %d",(i + 101),Bill[i]);
   }
   
   printf("\n\n ================================================ \n");
   
   printf("\n Total Amount Received Today = %d",Bill_Sum);
   
   printf("\n\n ================================================ \n");
   
   getch();
   return 0;
}
