#include<stdio.h>
#include<conio.h>
#include<string.h>

struct product 
{
      int P_Id;
      char Name[20];
      float P_Price;
      float S_Price;
};

int main()
{
      struct product Obj1,Obj2,Obj3 = {11,"Book",100,150};
      
      Obj1.P_Id = 9;
      strcpy(Obj1.Name,"Pen");
      Obj1.P_Price = 50;
      Obj1.S_Price = 70;
      
      printf("\n Enter Product Id = ");
      scanf("%d",&Obj2.P_Id);
      
      printf("\n Enter Product Name = ");
      scanf(" %[^\n]",Obj2.Name);
      
      printf("\n Enter Product Purchase Price = ");
      scanf("%f",&Obj2.P_Price);
      
      printf("\n Enter Product Selling Price = ");
      scanf("%f",&Obj2.S_Price);
      
      printf("\n\n =============********============="); 
      
      printf("\n\n 1st Product Details Given are => \n\n\t\t Product Id = %d.\n\t\t Product Name = %s.\n\t\t Product Purchase Price = %0.2f \n\t\t Product Selling Price = %0.2f",Obj1.P_Id,Obj1.Name,Obj1.P_Price,Obj1.S_Price);
      printf("\n\n 2nd Product Details Given are => \n\n\t\t Product Id = %d.\n\t\t Product Name = %s.\n\t\t Product Purchase Price = %0.2f \n\t\t Product Selling Price = %0.2f",Obj2.P_Id,Obj2.Name,Obj2.P_Price,Obj2.S_Price);
      printf("\n\n 3rd Product Details Given are => \n\n\t\t Product Id = %d.\n\t\t Product Name = %s.\n\t\t Product Purchase Price = %0.2f \n\t\t Product Selling Price = %0.2f",Obj3.P_Id,Obj3.Name,Obj3.P_Price,Obj3.S_Price);
      
      printf("\n\n =============********=============");
      
      printf("\n\n Thanks !!!");
}