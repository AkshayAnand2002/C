#include<stdio.h>
#define CLASS_SIZE 5
int main(){
double marks[CLASS_SIZE];
double total = 0.0;
int i;
printf("ENTER MARKS OF %d STUDENTS:\n",CLASS_SIZE);
for(i=0;i<CLASS_SIZE;i++){
    scanf("%lf",&marks[i]);//used %lf as marks array is of double datatype if it was of float we would have use %f
}
for(i=0;i<CLASS_SIZE;i++){
    total = total+marks[i];
}
double average;
average = total/(double)CLASS_SIZE;
printf("AVERAGE: %f",average);
return 0;
}
