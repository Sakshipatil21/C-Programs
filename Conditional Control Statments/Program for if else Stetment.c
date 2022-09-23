#include<stdio.h>
#include<conio.h>
int main()
{
  float Amount = 0.0;
  
  printf("\n Enter Your Account Balance =");
  scanf("%f",&Amount);
  
  if(Amount>1000)
  {
    printf("\n\n WELCOME to Mall !!");
  }
  else
  {
    printf("\n\n Minimum Balance Required to Shop is 1000 +");
  }
  printf("\n\n Thanks For Visit !!");
  
  getch();
  return 0;
}