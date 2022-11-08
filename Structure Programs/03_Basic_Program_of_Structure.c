#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
       int RollNo;
       char Name[16];
       char City[8];
       float Per;
};

int main()
{
       struct student std1,std2,std3;
       
       printf("\n Enter Roll No : ");
       scanf("%d",&std1.RollNo);
       
       printf("\n Enter Name = ");
       scanf(" %[^\n]",&std1.Name);
       
       printf("\n Enter City = ");
       scanf(" %[^\n]",&std1.City);
       
       printf("\n Enter Percentage = ");
       scanf("%f",&std1.Per); 
       
       printf("\n\n Enter Roll No : ");
       scanf("%d",&std2.RollNo);
       
       printf("\n Enter Name = ");
       scanf(" %[^\n]",&std2.Name);
       
       printf("\n Enter City = ");
       scanf(" %[^\n]",&std2.City);
       
       printf("\n Enter Percentage = ");
       scanf("%f",&std2.Per);
       
       printf("\n\n Enter Roll No : ");
       scanf("%d",&std3.RollNo);
       
       printf("\n Enter Name = ");
       scanf(" %[^\n]",&std3.Name);
       
       printf("\n Enter City = ");
       scanf(" %[^\n]",&std3.City);
       
       printf("\n Enter Percentage = ");
       scanf("%f",&std3.Per);
       
       printf("\n •••••••••••••••••••••••••••");
       
       printf("\n\n 1st Student Details are => \n\n\t\t Roll No = %d.\n\t\t Name = %s.\n\t\t City = %s.\n\t\t Percentage = %0.2f \n",std1.RollNo,std1.Name,std1.City,std1.Per);
       printf("\n\n 2nd Student Details are => \n\n\t\t Roll No = %d.\n\t\t Name = %s.\n\t\t City = %s.\n\t\t Percentage = %0.2f \n",std2.RollNo,std2.Name,std2.City,std2.Per);
       printf("\n\n 3rd Student Details are => \n\n\t\t Roll No = %d.\n\t\t Name = %s.\n\t\t City = %s.\n\t\t Percentage = %0.2f \n",std3.RollNo,std3.Name,std3.City,std3.Per);
       
       printf("\n ••••••••••••••••••••••••••• \n");
       
       printf("\n Thanks !!!");
       
       getch();
       return 0;
}       