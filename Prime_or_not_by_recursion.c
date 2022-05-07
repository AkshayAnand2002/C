#include<stdio.h>
int prime(int n, int i){
	if(i ==1 || i == n){
		return 0;
	}
	else{
		if(n%i == 0){
			return 0;
		}
		else{
			i++;
			prime(n,i);
		}
	}
	return 1;
}
int main(){
	int a=2,num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	int ans = prime(num,a);
	if(ans == 1){
		printf("%d is a prime number.",num);
	}
	else{
		printf("%d is not a prime number.",num);
	}
}
