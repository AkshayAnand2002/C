#include<stdio.h>
int main(){
	float i,n,sum=0;
	printf("Enter the value of n upto where you want to find the sum : ");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		sum=sum + 1/i;
	}
	printf("The sum of series is %f",sum);
	return 0;
}
//for 1/2+1/4+1/6 +..+1/n; we take for loop as 
//for(i=2;i<=n;i=1+2){
//		sum=sum + 1/i;
//	}
