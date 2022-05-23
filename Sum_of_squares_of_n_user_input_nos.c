#include<stdio.h>
#include<stdlib.h>
void main(){
	int i,s,n,x;
	printf("ENTER N: ");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++){
		printf("ENTER x-%d : ",i);
		scanf("%d",&x);
		s=s+x*x;
	}
	printf("\nSUM OF SQUARE OF NUMBERS = %d",s);
}
