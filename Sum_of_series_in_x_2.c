//x-(x^2/2)+(x^3/3)-(x^4/4)+..+(x^n/n)
#include<stdio.h>
#include<math.h>
int main(){
	float i,n,x,sum=0;
	printf("Enter the value of x:");
	scanf("%f",&x);
	printf("Enter the value of n:");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
	sum =sum + ((pow(x,i)*pow(-1,i-1))/i); 	
	}
	printf("Sum of series is %f.",sum);
	return 0;
}
