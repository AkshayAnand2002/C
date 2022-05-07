// x+x/2+x/3+x/4+...+x/n
#include<stdio.h>
int main(){
	float i,n,x,sum=0;
	printf("Enter the value of x:");
	scanf("%f",&x);
	printf("Enter the value of n:");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		sum=sum+x/i;
	}
	printf("The sum of series is %f.",sum);
	return 0;
}
