#include<stdio.h>
#include<conio.h>

int main()
{
    int No1,No2;
    int Sum,Sub,Mult;
    float Div;
    
    printf("\n Enter Any Two Numbers = ");
    scanf("%d%d",&No1,&No2);
    
    Sum = No1 + No2;
    Sub = No1 - No2;
    Mult = No1 * No2;
    Div = (float) No1 / No2;
    
    printf("\n =========== ***** ===========");
    
    printf("\n\n Addition of Two Numbers = %d",Sum);
    printf("\n\n Substraction of Two Numbers  = %d",Sub);
    printf("\n\n Multiplication of Two Numbers = %d",Mult);
    printf("\n\n Division of Two Numbers = %0.2f",Div);

    printf("\n\n =========== ***** ===========");

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}