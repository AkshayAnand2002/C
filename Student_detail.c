#include<stdlib.h>
#include "Student_detail.h"
int main()
{
  student st[100];
  int i,n,pos,choice;
  char search_name[20];
  char ch;
  i=0;
  while(1)
  {
    printf("\nMenu Choices");
    printf("\n1. Add a record of student");
    printf("\n2. Display a record of student");
    printf("\n3. Sort the list");
    printf("\n4. Display the list");
    printf("\n5. Exit");
    printf("\n Enter your choice[1-5]:");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1: st[i] = getdata();
		i++;
                break;
       case 2: printf("Enter the name of the student:");
               scanf("%s",search_name);
               pos =  search(st,search_name,i);
               if(pos<0)
                 printf("\n Record %s not found", search_name);
               else
                 display_data(st[pos]);
               break;
       case 3: sort_on_CGPA(st,i);
	        break;
       case 4: display_list(st,i);
	        break;
       case 5: printf("Are you sure [Y/N]:");
               getchar();
               ch = getchar();
               if(ch=='Y'||ch=='y')
		           exit(0);
       default: printf("\n Invalid choice try again [1-5]:");
    }
  }

  return 0;
}
