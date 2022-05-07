#include<stdio.h>
void main(){
int i,n,array[100];
printf("ENTER NO. OF ELEMENTS IN ARRAY: ");
scanf("%d",&n);
printf("ENTER ARRAY ELEMENTS:\n");
for(i=0;i<n;i++){
    scanf("%d",&array[i]);
}
printf("VALUES STORED IN ARRAY:\n");
for(i=0;i<n;i++){
    printf("%d ",array[i]);
}
printf("\nVALUES STORED IN ARRAY IN REVERSE ORDER:\n");
for(i=n-1;i>=0;i--){
    printf("%d ",array[i]);
}
}
