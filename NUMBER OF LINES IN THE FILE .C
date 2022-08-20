#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *ptr;
	int count=0;
	ptr=fopen("C:/Users/aksha/OneDrive/Desktop/doc1.txt","r");
	if(ptr==NULL){
		printf("ERROR.");
		exit(1);
	}
	else{
		char c;
		do{
			c=getc(ptr);
			if(c=='\n'){
				count++;
			}
		}while(c!=EOF);
		printf("NUMBER OF LINES IN THE FILE IS %d.",count);
	}
	fclose(ptr);
}
