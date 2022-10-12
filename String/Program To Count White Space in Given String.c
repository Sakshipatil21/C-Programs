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
     if(cSrc[i] == ' ')
     {
         cnt++;
     }
     i++;
   }
  
   printf("\n white Space in Given String is => %d",cnt);
   
   getch();
   return 0;
}