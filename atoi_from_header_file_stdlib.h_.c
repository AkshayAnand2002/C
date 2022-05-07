//atoi converts numerical strings into integers and if entered string is not numerical means it does not have
//integers as characters as part of string then it straightaway return 0 as answer.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char P[10];
printf("ENTER A STRING: ");
gets(P);
printf("ENTERED STRING IS : ");
puts(P);
printf("INTEGER VALUE OF %s IS %d.",P,atoi(P));
}
