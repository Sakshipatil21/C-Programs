#include<stdio.h>
#include<conio.h>

int Add();

int main()
{
    int Sum = 0;
    
    Sum = Add();
    
    printf("\n Addition of Two Numbers = %d \n",Sum);
    
    getch();
}
int Add()
{
    int No1 = 0, No2 = 0, Sum = 0;
    
    printf("\n Enter Two Numbers = ");
    scanf("%d%d",&No1,&No2);
    
    Sum = No1 + No2;
    
    return Sum;
}