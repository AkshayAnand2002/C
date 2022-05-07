#include <stdio.h>
#include <stdlib.h>
#include "Student_Result.h"
void main()
{
  student st[100];
  int i,n;
  printf("\n Enter number of students:");
  scanf("%d", &n);
  if(n<0 || n>100)
    {
      printf("\nGet lost");
      exit(0);
     }
  for(i=0;i<n;i++)
     st[i] = getdata();
  cal_percent(st,n);
  display_result(st,n);
}


