#include<stdio.h>
int cubebyvalue(int n);
int main(){
	int number = 5;
	printf("THE ORIGINAL VALUE OF NUMBER IS %d.\n",number);
	number = cubebyvalue(number);
	printf("THE NEW VALUE OF NUMBER IS %d.",number);
}
int cubebyvalue(int n){
	return n*n*n;
}
