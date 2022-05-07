#include <stdio.h>
#include <string.h>
typedef struct
{
   char name[50];
   int m1,m2,m3;
   float percent;
   char result[12];
}student;
student getdata()
{
   student temp;
   printf("\n Enter name:");
   scanf("%s", temp.name);
   printf("\n Enter marks of Physics:");
   scanf("%d", &temp.m1);
    printf("\n Enter marks of Chemistry:");
   scanf("%d", &temp.m2);
   printf("\n Enter marks of Maths:");
   scanf("%d", &temp.m3);
  return temp;
}
void cal_percent(student x[], int n)
{
   int i;
   for(i=0;i<n;i++)
	  {x[i].percent = (x[i].m1+x[i].m2+x[i].m3)/3.0;
      if(x[i].percent>=80)
          strcpy(x[i].result, "Honours");
      else
         if(x[i].percent>=60)
          strcpy(x[i].result, "First");
      else
       if(x[i].percent>=50)
          strcpy(x[i].result, "Second");
      else
       if(x[i].percent>=40)
          strcpy(x[i].result, "Third");
         else
          strcpy(x[i].result, "Failed");
 }
}
void display_result(student y[], int size)
{
   int i;
   for(i=0;i<size;i++)
     printf("\n%s\t\t\t%.2f\t%s", y[i].name,y[i].percent,y[i].result);
}
