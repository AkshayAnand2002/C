#include<stdio.h>
#define MAX_SIZE 100
int main(){
int array[MAX_SIZE];
int i,size,count =0;
printf("ENTER SIZE OF ARRAY: ");
scanf("%d",&size);
printf("ENTER ARRAY ELEMENTS:\n");
for(i=0;i<size;i++){
    scanf("%d",&array[i]);
}
for(i=0;i<size;i++){
    if(array[i]<0){
        count++;
    }
}
printf("TOTAL NO. OF NEGATIVE ELEMENTS = %d.",count);
return 0;
}
