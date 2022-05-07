#include<stdio.h>
#define MAX_SIZE 100
int main(){
int array[MAX_SIZE];
int i,max,min,size,maxindex,minindex;
printf("ENTER SIZE OF ARRAY: ");
scanf("%d",&size);
printf("ENTER ELEMENTS IN ARRAY: \n");
for(i=0;i<size;i++){
    scanf("%d",&array[i]);
}
max=array[0];
min=array[0];
for(i=1;i<size;i++){
    if(array[i] > max){
        max=array[i];
        maxindex=i;
    }
    if(array[i] < min){
        min=array[i];
        minindex=i;
    }
}
printf("MAXIMUM ELEMENT = %d AT INDEX =%d.\n",max,maxindex);
printf("MINIMUM ELEMENT = %d AT INDEX = %d.",min,minindex);
}
