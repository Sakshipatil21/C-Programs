#include<stdio.h>
#include<conio.h>

int main()
{
   char cSrc[50] = { };
   int Len = 0;
   
   puts("\n Enter a String = ");
   gets(cSrc);
   
   while(cSrc[Len] != '\0')
   {
      Len ++;
   }
   
   printf("\n Length of Given String is = %d",Len);
   
   getch();
   return 0;
 }
