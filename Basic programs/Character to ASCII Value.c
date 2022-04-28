#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';
    
    printf("\n Enter a Character to Get ASCII Value =");
    scanf("%c",&ch);
    
    printf("\n\n ASCII Value for |%c| Character is |%d|.",ch,ch);
    
    getch();
    return 0;
}