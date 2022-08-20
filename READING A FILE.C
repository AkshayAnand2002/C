#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *ptr;
	ptr=fopen("C:/Users/aksha/OneDrive/Desktop/doc1.txt","r");
	if(ptr==NULL){
		printf("ERROR.");
		exit(1);
	}
	else{
		char c;
		while(c!=EOF){
			c=fgetc(ptr);
			printf("%c",c);
		}
	}
	fclose(ptr);
}
