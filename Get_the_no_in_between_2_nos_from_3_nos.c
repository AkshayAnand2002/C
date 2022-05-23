#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter the value of a,b,c : ");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b && a<c) || (a<b && a>c))
	{
		printf("a is middle");
	}
	else if((b>a && b<c) || (b<a && b>c))
	{
		printf("b is middle");
	}
	else 
	{
		printf("c is middle");
	}
	return 0;
}
