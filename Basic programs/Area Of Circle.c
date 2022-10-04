#include<stdio.h>
#include<conio.h>

int main()
{
   int Rad = 0;
   float Pi = 3.14;
   float Area = 0.0;
   
   printf("\n Enter Radius Of Circle = ");
   scanf("%d",&Rad);
   
   Area = Pi * Rad * Rad;
   
   printf("\n Area Of Circle = % 0.4f",Area);
   
   printf("\n\n Thanks !!!!");
   
   getch();
   return 0;
}