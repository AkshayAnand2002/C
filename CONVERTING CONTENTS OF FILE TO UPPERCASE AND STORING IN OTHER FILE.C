#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *ptr;
	ptr=fopen("C:/Users/aksha/OneDrive/Desktop/doc1.txt","r");
	FILE *ptr1;
	ptr1=fopen("C:/Users/aksha/OneDrive/Desktop/doc2.txt","w");
	if(ptr==NULL){
		printf("ERROR.");
		exit(1);
	}
	else{
		char c;
		while(c!=EOF){
			c=getc(ptr);
			if(c>=97){
				c=c-32;
			}
			fputc(c,ptr1);
		}
	}
	fclose(ptr);
	fclose(ptr1);
	return 0;
}
