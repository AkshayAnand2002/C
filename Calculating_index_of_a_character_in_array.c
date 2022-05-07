#include<stdio.h>
#include<stdlib.h>
int find_idx(char ch , char list[],int size){
int i;
for(i=0;i<size;i++){
    if (list[i]== ch){
        return i;
    }
}
return -1;
}
int main(){
printf("%d\n",find_idx('a',"akshay",6));
printf("%d\n",find_idx('a',"Akshay",6));
printf("%d\n",find_idx('b',"Akshay",6));
}
