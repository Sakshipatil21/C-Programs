#include<stdio.h>
#include<conio.h>

int main()
{
   int Age = 0;
   
   printf("\n Enter Your Age = ");
   scanf("%d",&Age);
   
   if(Age >= 18)
   {
      printf("\n You Are Eligible For Vote.");
   }
   else
   {
      printf("\n You Are Not Eligible For Vote.");
   }
   
   printf("\n\n Thanks !!!");
   
   getch();
   return 0;
}
