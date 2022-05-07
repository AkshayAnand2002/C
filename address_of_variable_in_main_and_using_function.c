//create a function print_addr(int x) whose pupose is to print the address of integer x passed to it.
//Create an integer variable in main, print out its address and then pass that variable to print_addr.
//Print out address do we get the same address?
#include<stdio.h>
#include<stdlib.h>
void print_addr(int x){
	int *y = &x;
	printf("Address Of x by function : %p\n",y);//%p is used for printing pointer address.
}
int main(){
	int x=5;
	int *y = &x;
	printf("Address of x = %p\n",y);
	print_addr(x);
}
/*
int *p = &c;
is equivalent to

int *p:
p = &c;
*/
// No we don't get the same address.
// For eg:
//Address of x = 000000000062FE14
//Address Of x : 000000000062FDF0
