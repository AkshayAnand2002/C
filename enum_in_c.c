#include<stdio.h>
enum day{mon=1,tue,wed,thu,fri,sat,sun};
enum month{jan=1,feb,mar,april,may,june,jul,aug,sep,oct,nov,dec};
void main()
{
	enum day d1;
	enum month m1;
	m1=jan;
	d1=thu;
	printf("\n day:%d",d1);
	printf("\n month:%d",m1);
}
