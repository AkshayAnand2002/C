#include<stdio.h>
#include<string.h>
typedef struct
{
  char name[30];
  char rollno[30];
  char branch[20];
  float cgpa;
}student;
student getdata()
{
    student t;
    printf("Enter Details of student: \n");
    printf("enter Your name:");
  	scanf("%s", t.name);
  	printf("enter Your Roll Number:");
  	scanf("%s", t.rollno);
  	printf("enter Your Branch:");
  	scanf("%s", t.branch);
  	printf("enter Your CGPA :");
  	scanf("%f", &t.cgpa);
  return t;
}
int search(student x[], char n[], int size)
{
  int i;
  for(i=0;i<size;i++)
  {
  	if(strcmp(x[i].name,n)==0)
  	{
  	     return i;
  	}

  }
   return -1;
}
void display_data(student y)
{

   printf("\n RollNo: %s", y.rollno);
   printf("\n Branch: %s", y.branch);
   printf("\n CGPA: %.2f", y.cgpa);

}
void display_list(student z[], int size)
{

   int i;
   printf("\nName\tRollno\t\tBranch\tCGPA\n");
   for(i=0;i<size;i++)
     printf("%s\t%s\t%s\t%.2f\n",z[i].name,z[i].rollno,z[i].branch,z[i].cgpa);

}
void sort_list(student x[], int size)
{
   student temp;
   int i,j;
   for(i=0;i<size-1;i++)
     for(j=0;j<size-i-1;j++)
       if((strcmp(x[j].name,x[j+1].name))>0)
         {
            temp = x[j];
            x[j] = x[j+1];
            x[j+1] = temp;
         }
}
void sort_on_CGPA(student x[], int size)
{
   student temp;
   int i,j;
   for(i=0;i<size-1;i++)
     for(j=0;j<size-i-1;j++)
       if(x[j].cgpa > x[j+1].cgpa)
         {
            temp = x[j];
            x[j] = x[j+1];
            x[j+1] = temp;
         }
}
