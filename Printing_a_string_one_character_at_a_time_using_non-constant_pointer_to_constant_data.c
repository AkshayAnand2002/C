//Printing a string one character at a time using a non-constant pointer to constant data.
//pointer can point to any data of appropriate type but data to which it points can't be modified.
#include<stdio.h>
void printCharacters(const char *sPtr);
int main(){
char string[]= "print characters of a string";
puts("THE STRING IS: ");
printCharacters(string);
puts("");
}
void printCharacters(const char *sPtr){
for(; *sPtr !='\0';++sPtr){
    printf("%c",*sPtr);
}
}
