#include<stdio.h>
int main(){
	int num1,num2,sum;
	int *ptr1,*ptr2;
	ptr1=&num1;
	ptr2=&num2;
	printf("Enter any 2 nos.:");
	scanf("%d%d",ptr1,ptr2);
	sum=*ptr1+*ptr2;
	printf("Sum = %d",sum);
	return 0;
}
