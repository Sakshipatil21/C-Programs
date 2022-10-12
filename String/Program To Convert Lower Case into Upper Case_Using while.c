#include<stdio.h>
#include<conio.h>

int main()
{
   char cSrc[50] = {'\0'};
   int i = 0;
   
   puts("\n Enter a String = ");
   gets(cSrc);
   
   while(cSrc[i] != '\0')
   {
      if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
      {
         cSrc[i] = cSrc[i] - 32;
      }
      i++;
   }
   
   printf("\n Upper Case String is => %s",cSrc);
   
   getch();
   return 0;
}