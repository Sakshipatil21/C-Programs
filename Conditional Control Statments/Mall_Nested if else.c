#include<stdio.h>
#include<conio.h>

int main()
{
  float Amount = 0.0;
  
  printf("\n Enter Your Balance =");
  scanf("%f",&Amount);
  
  if(Amount > 1000)
  {
    printf("\n\n WELCOME to Mall !!!");
    
    if(Amount > 10000)
    {
      printf("\n\n You Can Be Prime Member Of This Mall !!!");
    }
    printf("\n\n Have a Nice Shipping !!!");
  }
  else
  {
    printf("\n\n Minimum Balance Required To Shop Here Is 1000 + \n");
    
    if(Amount > 500)
    {
      printf("\t But You Can Visit Our Outlet At Corner !!! \n");
    }
    else
    {
      printf("\n\t You Are Not Eligible To Shop !!!");
    }
    printf("\n\n Thanks For Visit !!!");
    
    getch();
    return 0;
  }
}