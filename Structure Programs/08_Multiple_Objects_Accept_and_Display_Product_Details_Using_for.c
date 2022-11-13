#include<stdio.h>
#include<conio.h>

struct Product
{
       int P_ID;
       char P_Name[20];
       float P_P_Price;
       float P_S_Price;
};

int main()
{
       int i = 0,Count = 3;
       struct Product Prod[Count];
       
       printf("\n\n Accepting Product Details => \n");
       
       for(i = 0; i < Count; i++)
       {
             printf("\n\n Enter Product ID = ");
             scanf("%d",&Prod[i].P_ID);
            
             printf("\n Enter Product Name = ");
             scanf(" %[^\n]",&Prod[i].P_Name);
            
             printf("\n Enter Product Purchase Price = ");
             scanf(" %f",&Prod[i].P_P_Price);
            
             printf("\n Enter Product Sales Price = ");
             scanf("%f",&Prod[i].P_S_Price);
       }
       
       getch();
       system("cls");
       
       printf("\n ================================= \n");
       
       printf("\n Display Product Details =>");
       
       for(i = 0; i < Count; i++)
       {
             printf("\n\n %d Product Details => \n",i+1);
            
             printf("\n\t\t ID = %d.",Prod[i].P_ID);
             printf("\n\t\t Name = %s.",Prod[i].P_Name);
             printf("\n\t\t Purchase Price = %0.2f",Prod[i].P_P_Price);
             printf("\n\t\t Sales Price = %0.2f",Prod[i].P_S_Price);
       }
       
       printf("\n\n =============================== \n");
       
       printf("\n Thanks !!!");
       
       getch();
       return 0;
}