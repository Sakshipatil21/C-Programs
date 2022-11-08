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
       struct student std1,std2,std3 = {120,"Sakshi Patil","Pune",80};
       
       std1.RollNo = 123;
       strcpy(std1.Name,"Swara Patil");
       strcpy(std1.City,"Karad");
       std1.Per = 75.80;
       
       printf("\n Enter Roll No : ");
       scanf("%d",&std2.RollNo);
       
       printf("\n Enter Name : ");
       scanf(" %[^\n]",&std2.Name);
       
       printf("\n Enter City : ");
       scanf(" %[^\n]",&std2.City);
       
       printf("\n Enter Percentage : ");
       scanf("%f",&std2.Per);
       
       printf("\n\n ********************************");
       
       printf("\n\n 1st Student Details Given are => \n\n\t Roll No = %d.\n\t Name = %s.\n\t City = %s.\n\t Percentage = %0.2f \n",std1.RollNo,std1.Name,std1.City,std1.Per);
       printf("\n\n 2nd Student Details Given are => \n\n\t Roll No = %d.\n\t Name = %s.\n\t City = %s.\n\t Percentage = %0.2f \n",std2.RollNo,std2.Name,std2.City,std2.Per);
       printf("\n\n 3rd student Details Given are => \n\n\t Roll No = %d.\n\t Name = %s.\n\t City = %s.\n\t Percentage = %0.2f \n",std3.RollNo,std3.Name,std3.City,std3.Per);
       
       printf("\n\n ********************************");
       
       printf("\n\n Thanks !!!");
       
       getch();
       return 0;
}