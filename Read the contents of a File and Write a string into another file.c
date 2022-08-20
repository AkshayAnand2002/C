#include<stdio.h>
int main(){
	FILE *fp,*fw;
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/doc1.txt","r");
	char ch;
	while(1){
		ch=fgetc(fp);
		if(ch==EOF){
			break;
		}
		printf("%c",ch);
	}
	fw=fopen("C:/Users/aksha/OneDrive/Desktop/doc2.txt","w");
	char ch1[10]="coding";
	int i=0;
	while(ch1[i] !='\0'){
		fputc(ch1[i],fw);
		i++;
	}
	fclose(fp);
	fclose(fw);
	return 0;
}
