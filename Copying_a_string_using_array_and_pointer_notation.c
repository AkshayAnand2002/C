#include<stdio.h>
#define SIZE 10
void copy1(char *const s1, const char *const s2 );
void copy2(char *s1, const char *s2);
int main(){
char string1[SIZE];
char *string2 = "Hello";
char string3[SIZE];
char string4[]="Good Bye";
copy1(string1,string2);
printf("string1 = %s\n",string1);
copy2(string3,string4);
printf("string3 = %s\n",string3);
}
//copy s2 to s1 using array notation
void copy1(char *const s1, const char *const s2 ){//2nd parameter is constant.
size_t i;
for(i=0;(s1[i]=s2[i]) !='\0';++i){
    ;
}
}
//copy s2 to s1 using pointer notation here s4 to s3
void copy2(char *s1, const char *s2){
for(;(*s1 = *s2)!='\0';++s1,++s2)
    {
        ;
    }
}
