#include<stdio.h>
#include<conio.h>
int main()
{
  float Amount = 0.0;
  
  printf("\n Enter Your Account Balance !!");
  scanf("%f",&Amount);
  
  if(Amount>10000)
  {
    printf("\n\n WELCOME to Mall !!");
    printf("\n You are prime customer !!");
    printf("\n Go to counter No.7 for prime offers");
  }
  else if(Amount>=7000)
  {
    printf("\n\n WELCOME to Mall !!");
    printf("\n You can enjoy all shops");
  }
  else if(Amount>1000)
  {
    printf("\n\n WELCOME to Mall !!");
    printf("You can shop at ground floor");
  }
  else
  {
    printf("\n\n Minimum Balance Required To Shop is 1000 +");
  }
  printf("Thanks For Visit !!!");
  
  getch();
  return 0;
}