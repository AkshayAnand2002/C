#include<stdio.h>
#include<stdlib.h>
int add( int *no1, int *no2);
int main(){
	int num1,num2,result;
	printf("Enter the 2 nos: ");
	scanf("%d %d",&num1,&num2);
	result = add(&num1,&num2);
	printf("Addition is : %d  ", result);
}
int add( int *no1, int *no2){
	int res;
	res = *no1 + *no2;
	return res;
}
