#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fw;
	int count=3;
	struct student{
		char name[20];
		int id;
		int age;
		float marks;
	};
	struct student s;
	fw=fopen("C:/Users/aksha/OneDrive/Desktop/doc2.dat","w");
	while(count !=0){
		printf("ENTER THE NAME,ID,AGE AND MARKS OF STUDENT:\n");
		scanf("%s %d %d %f",&s.name,&s.id,&s.age,&s.marks);
		fwrite(&s,sizeof(s),1,fw);
		fflush(stdin);
		count--;
	}
	fclose(fw);
	return 0;
}
