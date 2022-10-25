#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;
    
    printf("\n ASCII Table =>\n\n");
    
    for(No =0; No < 128; No++)
    {
        printf("\n %d = %c",No,No);
    }
    printf("\n\n Thanks for using our services....");
    
    getch();
    return 0;
}
