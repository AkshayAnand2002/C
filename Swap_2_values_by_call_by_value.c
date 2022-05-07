#include<stdio.h>
void swap(float a,float b){
	float k;
	k=a;
	a=b;
	b=k;
	printf("\nThe values of a and b are : %.2f and %.2f",a,b);
}
int main(){
	float A,B ;
	printf("Enter the 2 numbers:");
	scanf("%f%f",&A,&B);
	printf("Entered values are : %.2f and %.2f",A,B);
	swap(A,B);
}
