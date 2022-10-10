#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
   char cSrc[50] = { };
   int Len = 0;
   
   puts("\n Enter a String : ");
   gets(cSrc);
   
   Len = strlen(cSrc);
   
   printf("\n Length of Given String is = %d",Len);
   
   getch();
   return 0;
}