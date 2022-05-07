#include<stdio.h>
#define SIZE 10
void bubbleSort(int *const array , const int size);/*prototype*/
int main(){
int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
int i;//COUNTER
puts("DATA ITEM IN ORIGINAL ORDER");
for(i=0;i<SIZE;++i){
        printf("%4d",a[i]);
}
bubbleSort(a,SIZE);
puts("\nDATA ITEM IN ASCENDING ORDER");
for(i=0;i<SIZE;++i){
        printf("%4d",a[i]);
}
printf("\n");
}
void bubbleSort(int *const array,const int size){
void swap(int *element1Ptr , int *element2ptr);
int pass;//pass counter
int j;//comparison counter
for(pass =0;pass< size-1;++pass){//to control pass
    for(j=0;j<SIZE-1;++j){//to control comparison
        if(array[j] > array[j+1]){ //swap
            swap(&array[j],&array[j+1]);
        }
    }
}
}
void swap(int *element1Ptr, int *element2Ptr){//swap values at memory locations to which element1Ptr and element2Ptr point
int hold = *element1Ptr;
*element1Ptr = *element2Ptr;
*element2Ptr = hold;
}

/*
#include<stdio.h>
#define SIZE 10
void bubbleSort(int *const array , size_t size);
int main(){
int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
size_t i;//COUNTER
puts("DATA ITEM IN ORIGINAL ORDER");
for(i=0;i<SIZE;++i){
        printf("%4d",a[i]);
}
bubbleSort(a,SIZE);
puts("\nDATA ITEM IN ASCENDING ORDER");
for(i=0;i<SIZE;++i){
        printf("%4d",a[i]);
}
puts("");
}
void bubbleSort(int *const array,size_t size){
void swap(int *element1Ptr , int *element2ptr);
unsigned int pass;//pass counter
size_t j;//comparison counter
for(pass =0;pass< size-1;++pass){//to control pass
    for(j=0;j<SIZE-1;++j){//to control comparison
        if(array[j] > array[j+1]){ //swap
            swap(&array[j],&array[j+1]);
        }
    }
}
}
void swap(int *element1Ptr, int *element2Ptr){//swap values at memory locations to which element1Ptr and element2Ptr point
int hold = *element1Ptr;
*element1Ptr = *element2Ptr;
*element2Ptr = hold;
}
*/
