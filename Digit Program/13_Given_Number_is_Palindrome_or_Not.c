#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 0,Dig = 0,Temp = 0,Rev = 0;
   
        printf("\n Enter an Integer Number = ");
        scanf("%d",&Num);

        Temp = Num;

        while(Temp > 0 || Temp < 0)
        {
              Dig = Temp % 10;
              Rev = (Rev * 10) + Dig;
              Temp = Temp / 10;
        }
        if(Num == Rev)
        {
            printf("\n %d is a Palindrome",Num);
        }
        else
        {
            printf("\n %d is Not a Palindrome",Num);
        }
   
        printf("\n\n Thanks !!!");
   
        getch();
        return 0;
}