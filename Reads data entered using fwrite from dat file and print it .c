#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	struct student{
		char name[20];
		int id;
		int age;
		float marks;
	};
	struct student s;
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/doc2.dat","rb");
	if(fp==NULL){
		printf("CANNOT OPEN THE FILE.");
		exit(1);
	}
	while(fread(&s,sizeof(s),1,fp)==1){
		printf("%s %d %d %f",&s.name,&s.id,&s.age,&s.marks);
		printf("\n");
	}
	fclose(fp);
	return 0;
}
