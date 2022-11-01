#include<stdio.h>
#include<conio.h>

int main()
{
   int Values[5] = {'\0'};
   
   printf("\n Enter Element No.1 = ");
   scanf("%d",&Values[0]);
   
   printf("\n Enter Element No.2 = ");
   scanf("%d",&Values[1]);
   
   printf("\n Enter Element No.3 = ");
   scanf("%d",&Values[2]);
   
   printf("\n Enter Element No.4 = ");
   scanf("%d",&Values[3]);
   
   printf("\n Enter Element No.5 = ");
   scanf("%d",&Values[4]);
   
   getch();
   
   printf("\n\n Elements in Array are => \n");
   
   printf("\n\n Value of 101 Element = %d",Values[0]);
   printf("\n\n Value of 102 Element = %d",Values[1]);
   printf("\n\n Value of 103 Element = %d",Values[2]);
   printf("\n\n Value of 104 Element = %d",Values[3]);
   printf("\n\n Value of 105 Element = %d",Values[4]);

   Printf("\n\n Thanks !!!");
   
   getch();
   return 0;
}
