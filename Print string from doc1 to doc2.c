#include<stdio.h>
int main(){
	FILE *fp,*fw;
	char s[30];
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/doc1.txt","r");
	fw=fopen("C:/Users/aksha/OneDrive/Desktop/doc2.txt","w");
	while(fgets(s,30,fp) != NULL){
		fputs(s,fw);
		printf("%s",s);
	}
	fclose(fp);
	fclose(fw);
	return 0;
}
