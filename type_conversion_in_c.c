#include<stdio.h>
void main ()
{
	int x;
	float y;
	float a,b,c;
	int result;
	//Implicit type conversion
	x = 3;
	y = 3.5;
	printf("\n%f", x+y); //The output will be 6.5
	//Explicit type conversion
	a = 3.3;
	b = 3.3;
	c = 3.4;
	result = (int)a + (int)b + (int)c; //result == 9
	printf("\nresult = %d",result);
}
