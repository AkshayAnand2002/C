#include<stdio.h>
#define MAX_SIZE 100
int main(){
	int arr[MAX_SIZE];
	int N,i;
	int *ptr = arr;//pointing to 0th element of array
	printf("Enter array size:");
	scanf("%d",&N);
	printf("Enter array elements:\n");
	for(i=0;i<N;i++){
		scanf("%d",(ptr+i));//(ptr+i)=&arr[i]
	}
	printf("Array elements:");
	for(i=0;i<N;i++){
		printf("%d ",*(ptr+i));//*(ptr+i) = ptr[i]
	}
	return 0;
}
