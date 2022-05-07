#include<stdio.h>
int main(){
int a;
int *p=&a;
printf("ENTER THE VALUE OF a: ");
scanf("%d",&a);
printf("INITIAL VALUE OF a is %d.\n",(*p));
printf("ENTER NEW VALUE OF a:\n");
scanf("%d",&(*p));
printf("NEW VALUE OF a IS %d.",(*p));
return 0;
}
