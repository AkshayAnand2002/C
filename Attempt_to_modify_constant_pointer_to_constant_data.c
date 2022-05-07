//ptr is a constant pointer
#include<stdio.h>
int main(){
int x = 5;//initialize x
int y;//define y
const int *const ptr = &x;
printf("%d\n",*ptr);
*ptr =7;//ERROR: *ptr IS CONST; CAN'T ASSIGN NEW VALUE
ptr=&y;//ERROR: ptr IS CONST ; CAN'T ASSIGN NEW ADDRESS
}
