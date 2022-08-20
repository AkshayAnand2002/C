#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *ptr;
	ptr=fopen("C:/Users/aksha/OneDrive/Desktop/doc2.txt","w");
	if(ptr==NULL){
		printf("ERROR.");
		exit(1);
	}
	else{
		char A[30];
		printf("HOW MANY LINES DO YOU WANT TO ENTER?\n");
		int num;
		scanf("%d",&num);
		char c=getchar();
		int i;
		for(i=0;i<num;i++){
			printf("ENTER %d LINE:\n",i);
			gets(A);
			fputs(A,ptr);
			fputs("\n",ptr);
		}
	}
	fclose(ptr);
}
