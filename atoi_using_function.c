//atoi converts numerical strings into integers and if entered string is not numerical means it does not have
//integers as characters as part of string then it straightaway return 0 as answer.
#include<stdio.h>
#include<string.h>
int atoi(char A[]){
int res =0,i=0;
while(A[i] != '\0'){
    res = (res*10)+A[i]-'0';
    i++;
}
return res;
}
int main(){
char P[10];
printf("ENTER A STRING: ");
gets(P);
printf("ENTERED STRING IS : ");
puts(P);
printf("INTEGER VALUE OF %s IS %d.",P,atoi(P));
}
/*ASCII VALUE OF 0 IS 48 AND HENCE SUBTRACTION OF ANY NUMERICAL CHARACTER WITH ASCII VALUE OF ZERO RETURNS THAT CHARACTER. */
