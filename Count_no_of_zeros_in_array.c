#include<stdio.h>
#include<stdlib.h>
int count_zeros(int array[],int size){
	int zeros =0;
	for(int i=0;i<size;i++){
		if(array[i]==0){
			zeros++;
		}
	}
	return zeros;
}
void print_no_of_zeros(int x[],int size){
	int nzeros = count_zeros(x,size);
	if(size <= 0){
		printf("Array length is < 1.");
		return;
	}
	printf("No. of zeros = %d.\n",nzeros);
	return;
}
int main(){
	int a[] = {1,2,3,4,0};
	print_no_of_zeros(a,sizeof(a)/sizeof(int));
	int b[] = {};
	print_no_of_zeros(b,sizeof(b)/sizeof(int));
}
