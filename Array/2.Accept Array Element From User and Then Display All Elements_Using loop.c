#include<stdio.h>
#include<conio.h>

int main()
{
   int i = 0, j = 0, Value[8] = {0};
   
   for(i=0,j=1;i<8;i++,j++)
   {
      printf("\n Enter Element No %d = ",j);
      scanf("%d",&Value[i]);
   }
   getch();
   
   printf("\n\n Elements in Array Are => \n\n");
   
   for(i=0,j=101;i<8;i++,j++)
   {
      printf("\n Value of %d Element = %d",j,Value[i]);
   }
   getch();
   return 0;
}
