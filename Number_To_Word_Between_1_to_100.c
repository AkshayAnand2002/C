#include<stdio.h>
#include<stdlib.h>
void main(){
	int no,a,b;
	printf("enter no: ");
	scanf("%d",&no);
	a=no%10; //UNIT PLACE
	no=no/10;
	b=no%10; //DIGIT PLACE
	if(b==1) //DIGIT PLACE IS 1
	{
		if(a==0)
		{
			printf("Ten ");
		}
		else if(a==1)
		{
			printf("Eleven ");
		}
		else if(a==2)
		{
			printf("Twelve ");
		}
		else if(a==3)
		{
			printf("Thirteen ");
		}
		else if(a==4)
		{
			printf("Fourteen ");
		}
		else if(a==5)
		{
			printf("Fifteen ");
		}
		else if(a==6)
		{
			printf("Sixteen ");
		}
		else if(a==7)
		{
			printf("Seventeen ");
		}
		else if(a==8)
		{
			printf("Eighteen ");
		}
		else if(a==9)
		{
			printf("Ninteen ");
		}
	}
	else
	{
		if (b==2)
		{
			printf("Twenty ");
		}
		else if (b==3)
		{
			printf("Thirty ");
		}
		else if (b==4)
		{
			printf("Fourty ");
		}
		else if (b==5)
		{
			printf("Fifty ");
		}
		else if (b==6)
		{
			printf("Sixty ");
		}
		else if (b==7)
		{
			printf("Seventy ");
		}
		else if (b==8)
		{
			printf("Eighty ");
		}
		else if (b==9)
		{
			printf("Ninty ");
		}
		
		if (a==1)
		{
			printf("One ");
		}
		else if (a==2)
		{
			printf("Two ");
		}
		else if (a==3)
		{
			printf("Three ");
		}
		else if (a==4)
		{
			printf("Four ");
		}
		else if (a==5)
		{
			printf("Five ");
		}
		else if (a==6)
		{
			printf("Six ");
		}
		else if (a==7)
		{
			printf("Seven ");
		}
		else if (a==8)
		{
			printf("Eight ");
		}
		else if (a==9)
		{
			printf("Nine ");
		}
	}
}
