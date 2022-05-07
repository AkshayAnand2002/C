#include<stdio.h>
void swap(int *num1, int *num2);
int main(){
	int num1,num2;
	printf("Enter 2 nos:");
	scanf("%d%d",&num1,&num2);
	printf("Before swapping\n");
	printf("Value of num1:%d\n",num1);
	printf("Value of num2:%d\n",num2);
	swap(&num1,&num2);//function call
	printf("After swapping\n");
	printf("Value of num1:%d\n",num1);
	printf("Value of num2:%d\n",num2);
	return 0;
}
void swap(int *num1, int*num2){
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
