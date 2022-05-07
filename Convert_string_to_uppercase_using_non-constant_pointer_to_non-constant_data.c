//Highest level of data access is granted in non-constant pointer to non-constant data.
#include<stdio.h>
#include<ctype.h>
void convertToUppercase(char *sPtr);
int main(){
char string[] = "cHaRaCters and $32.98";
printf("STRING BEFORE CONVERSION IS : %s\n",string);
convertToUppercase(string);
printf("STRING AFTER CONVERSION IS : %s",string);
}
void convertToUppercase(char *sPtr){// *sPtr points to character type data.
while(*sPtr != '\0'){
    *sPtr = toupper(*sPtr);
    ++sPtr;//make sPtr point to next character.
}
}
