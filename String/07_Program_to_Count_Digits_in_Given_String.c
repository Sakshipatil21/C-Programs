#include<stdio.h>
#include<conio.h>

int main()
{
   char cSrc[50] = {'\0'};
   int cnt = 0,i = 0;
   
   puts("\n Enter a String = ");
   gets(cSrc);
   
   while(cSrc[i] != '\0')
   {
     if(cSrc[i] >= '0' && cSrc[i] <= '9')
     {
         cnt++;
     }
     i++;
   }
  
   printf("\n Digits in Given String is => %d",cnt);
   
   getch();
   return 0;
}
