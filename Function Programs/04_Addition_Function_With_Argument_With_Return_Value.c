#include<stdio.h>
#include<conio.h>

int Add(int,int);

int main()
{
    int No1 = 0, No2 = 0, Sum = 0;
    
    printf("\n Enter Two Numbers = ");
    scanf("%d%d",&No1,&No2);
    
    Sum = Add(No1,No2);
    
    printf("\n Addition of Two Numbers = %d \n",Sum);
    
    getch();
    return 0;
}
int Add(N1,N2)
{
    int Sum = 0;
    
    Sum = N1 + N2;
    
    return Sum;
}
