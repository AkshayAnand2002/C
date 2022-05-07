#include<stdio.h>
int bubbleSort(int a[],int size){
int temp,i,j;
for(i=0;i<size;i++){
    for(j=0;j<size-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
}
void main(){
int a[100],i,n;
printf("ENTER ARRAY SIZE: ");
scanf("%d",&n);
printf("ENTER ARRAY ELEMENTS:\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
bubbleSort(a,n);
printf("THE SORTED ARRAY IS :\n");
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
}
