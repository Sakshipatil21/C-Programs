#include<stdio.h>
#include<conio.h>

int main()
{
    char Tmp = '\0', cSrc[50] = {'\0'};
    int i = 0, j = 0;

    puts("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i--;

    while(i > j)
    {
        Tmp = cSrc[i];
        cSrc[i] = cSrc[j];
        cSrc[j] = Tmp;

        i--;
        j++;
    }

    printf("\n Given String After Reverse is = %s.",cSrc);

    getch();
    return 0;
}
