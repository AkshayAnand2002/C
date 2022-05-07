#include<stdio.h>
int main(){
	int number,remainder,sum;
	printf("Enter the number: ");
	scanf("%d",&number);
	sum=0;
	while(number>0){
		remainder = number%10;
		sum =sum+remainder;
		number=number/10;
	}
	printf("The sum of digits = %d",sum);
	return 0;
}
