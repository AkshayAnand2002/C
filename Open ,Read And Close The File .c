#include<stdio.h>
#include<stdlib.h>
struct number{
	int num1,num2,num3;
}num;
int main(){
	FILE *ptr;
	ptr=fopen("C:/Users/aksha/OneDrive/Desktop/doc1.txt","rb");//we could also take bin file inplace of txt file.
	if(ptr==NULL){
		printf("ERROR OCCURED.");
		exit(1);
	}
	else{
		int i;
		for(i=0;i<5;i++){
			fread(&num,sizeof(num),1,ptr);
			printf("n1=%d n2=%d n3=%d\n",num.num1,num.num2,num.num3);
		}
	}
	fclose(ptr);
}
