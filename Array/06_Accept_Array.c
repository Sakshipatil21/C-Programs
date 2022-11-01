#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Arr[5] = {};

    printf("\n\n The Value Of 101 Element = %d.",Arr[0]);
    printf("\n\n The Value Of 102 Element = %d.",Arr[1]);
    printf("\n\n The Value Of 103 Element = %d.",Arr[2]);
    printf("\n\n The Value Of 104 Element = %d.",Arr[3]);
    printf("\n\n The Value Of 105 Element = %d.",Arr[4]);

    getch();
    system("cls");

    printf("Enter Array Element => \n\n");

    printf("\n Enter Element[0] = ");
    scanf("%d",&Arr[0]);
    printf("\n Enter Element[1] = ");
    scanf("%d",&Arr[1]);
    printf("\n Enter Element[2] = ");
    scanf("%d",&Arr[2]);
    printf("\n Enter Element[3] = ");
    scanf("%d",&Arr[3]);

    Arr[3] = 55;
    Arr[2] = 50;
    Arr[4] = 25;

    printf("\n Enter Element[4] = ");
    scanf("%d",&Arr[4]);

    printf("\n Value Of 0 Element = %d.",Arr[0]);
    printf("\n Value Of 1 Element = %d.",Arr[1]);
    printf("\n Value Of 2 Element = %d.",Arr[2]);
    printf("\n Value Of 3 Element = %d.",Arr[3]);
    printf("\n Value Of 4 Element = %d.",Arr[4]);

    printf("\n\n Thanks...");

    getch();
    return 0;
}
