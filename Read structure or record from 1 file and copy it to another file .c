#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp,*fw;
	struct student{
		char name[20];
		int id;
		float marks;
	};
	struct student s;
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/doc1.txt","r");
	fw=fopen("C:/Users/aksha/OneDrive/Desktop/doc2.txt","w");
	while(fscanf(fp,"%s%d%f",&s.name,&s.id,&s.marks) != EOF){
		fprintf(fw,"%s %d %f",s.name,s.id,s.marks);
		fprintf(fw,"\n");
	}
	fclose(fp);
	fclose(fw);
	return 0;
}
