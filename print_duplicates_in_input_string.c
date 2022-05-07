#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
#define MAX_CHAR 255
int main(){
char A[MAX_SIZE];
int freq[MAX_CHAR];
printf("ENTER STRING : ");
gets(A);
printf("ENTERED STRING: ");
puts(A);
for(int i=0;i<MAX_CHAR;i++){
    freq[i]=0;
}
for(int i=0;i<strlen(A);i++){
    int ascii=(int)A[i];
    freq[ascii]++;
}
printf("COUNT OF DUPLICATE CHARACTERS: \n");
for(int i=0;i<MAX_CHAR;i++){
    if(freq[i]!=1 && freq[i]!=0){
        printf("%c,count=%d\n",i,freq[i]);
    }
}
printf("NO DUPLICATE CHARACTER IS PRESENT.");
}
