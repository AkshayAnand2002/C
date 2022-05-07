//Ritik wants a magic board to display a character for corresponding no. for his project.
#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("Enter the digits: \n");
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	char q = (char) a;
	char w =(char)b;
	char e = (char) c;
	char r = (char) d;
	printf("%d-%c\n",a,q);
	printf("%d-%c\n",b,w);
	printf("%d-%c\n",c,e);
	printf("%d-%c\n",d,r);
}
/*
#include<iostream>
using namespace std;
int main ()
{
    char c;
    cout << "Enter a character : ";
    cin >> c;
    cout << "ASCII value of " << c <<" is :  " << (int)c;
    return 0;
}
*/
// The above commented prog gives ascii value of input character.
