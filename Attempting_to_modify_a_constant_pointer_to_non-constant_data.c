//A CONSTANT POINTER TO NON-CONSTANT DATA ALWAYS POINTS TO SAME MEMORY LOCATION AND DATA AT THAT LOCATION CAN'T BE MODIFIED THROUGH POINTER.
#include<stdio.h>
int main(){
int x;
int y;
int *const ptr = &x;
//ptr is a constant pointer to an integer that can be modified through ptr but ptr always points to same memory location.
*ptr = 7;//allowed as *ptr is not constant till now.
ptr = &y;
//ERROR : ptr IS CONST; CAN;T ASSIGN NEW ADDRESS.
}
