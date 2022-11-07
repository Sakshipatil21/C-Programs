#include<stdio.h>
#include<conio.h>

struct student
{
      int RollNo;
      char Name[16];
      char City[8];
      float Per;
};

int main()
{
      struct student std1,std2;
      
      std1.RollNo = 123;
      strcpy(std1.Name,"Swara Patil");
      strcpy(std1.City,"Mumbai");
      std1.Per = 85.60;
      
      printf("\n Enter Roll No : ");
      scanf("%d",&std2.RollNo);
      
      printf("\n Enter Name : ");
      scanf(" %[^\n]",std2.Name);
      fflush(stdin);
      
      printf("\n Enter City : ");
      scanf(" %[^\n]",std2.City);
      fflush(stdin);
      
      printf("\n Enter Percentage : ");
      scanf("%f",&std2.Per);
      
      printf("\n =========== ********** =========== \n");
      
      printf("\n First Student Details Given are => \n\n\t Roll No = %d.\n\t Name = %s.\n\t City = %s.\n\t Percentage = %0.2f.\n",std1.RollNo,std1.Name,std1.City, std1.Per);
      printf("\n Second Student Details Given are => \n\n\t Roll No = %d.\n\t Name = %s.\n\t City = %s.\n\t Percentage = %0.2f.\n",std2.RollNo,std2.Name,std2.City,std2.Per);
      
      printf("\n =========== ********** ===========");
      
      printf("\n\n Thanks !!!!");
      
      getch();
      return 0;
}
