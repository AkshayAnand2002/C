#include<stdio.h>
void f(const int *xPtr);
int main(){
int y;
f(&y);
}
void f(const int *xPtr){
*xPtr = 100;
}
//ERROR: CAN'T MODIFY A CONST OBJECT
