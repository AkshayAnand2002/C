//a perfect number is a positive integer which is equal to the sum of its positive factors (or divisor) excluding the number itself.
#include<stdio.h>
int main(){
	int number,i,sum;
	printf("Enter the number: ");
	scanf("%d",&number);
	i=1;
	sum=0;
	for(i;i<number;i++){
		if(number%i == 0){
			sum = sum + i;
		}
	}
	if(sum == number){
		printf("The number is a perfect number.");
	}
	else{
		printf("The number is not a perfect number.");
	}
	return 0;
}
