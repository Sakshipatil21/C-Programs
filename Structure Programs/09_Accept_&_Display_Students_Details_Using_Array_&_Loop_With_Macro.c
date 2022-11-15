#include<stdio.h>
#include<conio.h>

#define Count 3

struct Student
{
       int RollNo;
       char Name[20];
       char City[8];
       float Per;
};

int main()
{
       int i = 0;
       struct Student Std[Count];
       
       printf("\n Accepting Students Details => \n");
       
       for(i = 0; i < Count; i++)
       {
            printf("\n\n Enter Roll No. = ");
            scanf("%d",&Std[i].RollNo);
            
            printf("\n Enter Name = ");
            scanf(" %[^\n]",&Std[i].Name);
            
            printf("\n Enter City = ");
            scanf(" %s",&Std[i].City);
            
            printf("\n Enter Percentage = ");
            scanf("%f",&Std[i].Per);
       }
       
       getch();
       system("cls");
       
       printf("\n ================================= \n");
       
       printf("\n Display Students Details =>");
       
       for(i = 0; i < Count; i++)
       {
            printf("\n\n %d Student Details => \n\n\t Roll No. = %d.\n\t Name = %s.\n\t City = %s.\n\t Percentage = %0.2f",i+1,Std[i].RollNo,Std[i].Name,Std[i].City,Std[i].Per);
            
       }
       
       printf("\n\n =============================== \n");
       
       printf("\n Thanks !!!");
       
       getch();
       return 0;
}