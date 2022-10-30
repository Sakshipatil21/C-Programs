#include<stdio.h>
#include<conio.h>

int main()
{
        int Arr[8] = {'\0'},i = 0,Cnt = 0,No = 0;

        for(i = 0; i < 8; i++)
        {
            printf("\n Enter %d Element : ",i+1);
            scanf("%d",&Arr[i]);
        }
        printf("\n\n Enter Number for Count = ");
        scanf("%d",&No);

        for(i = 0; i < 8; i++)
        {
            if( Arr[i] == No)
            {
                Cnt++;
            }
        }
        printf("\n\n The Count of %d Number is = %d",No,Cnt);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}