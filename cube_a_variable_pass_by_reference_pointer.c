#include<stdio.h>
void cubebyreference(int *nptr);
int main(){
	int number = 5;
	printf("THE ORIGINAL VALUE OF NUMBER IS %d.\n",number);
	cubebyreference(&number);
	printf("THE NEW VALUE OF NUMBER IS %d.",number);
}
void cubebyreference(int *nptr){
	*nptr= *nptr * *nptr * *nptr ;
}
