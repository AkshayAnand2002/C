#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("ENTER ARRAY SIZE:\n");
scanf("%d",&n);
int* p=(int*)(calloc(n,sizeof(int)));
int A[n];
p=&A[0];
printf("ENTER THE ARRAY:\n");
for(int i=0;i<n;i++){
    scanf("%d/n",&A[i]);
}
printf("ENTERED ARRAY IS:\n");
for(int i=0;i<n;i++){
    printf("%d ",A[i]);
}
int max=A[0];
for(int i=1;i<n;i++){
    if(A[i]>max){
        max=A[i];
    }
}
printf("\nMAXIMUM OF ENTERED ELEMENTS IS %d.",max);
}
