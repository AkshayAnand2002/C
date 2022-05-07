#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char Name[50];
	char Rollno[50];
	char Branch[50];
	float CGPA;
}student;
int main(){
	int n;
	printf("ENTER NO. OF STUDENTS:");
	scanf("%d",&n);
	student s[n];
	printf("ENTER THE REQUIRED DETAILS OF STUDENTS : \n");
	for(int i=0; i<n ;i++){
		printf("Enter name of student:");
		scanf("%s",s[i].Name);
		printf("Enter ROLL NO. of student:");
		scanf("%s",s[i].Rollno);
		printf("Enter branch of student:");
		scanf("%s",s[i].Branch);
		printf("Enter CGPA of student:");
		scanf("%s",s[i].CGPA);
	}
	for(int i=0;i<n;i++){
		printf("%s\t",s[i].Name);
		printf("%s\t",s[i].Rollno);
		printf("%s\t",s[i].Branch);
		printf("%s\t",s[i].CGPA);
	}
	char key[50];
	printf("ENTER ROLL NO. OF STUDENT:");
	scanf("%s",key);
	for(int i=0 ; i<n ;i++){
		if(strcmp(key,s[i].Rollno ==0)){
			printf("%s\t",s[i].Name);
		    printf("%s\t",s[i].Rollno);
		    printf("%s\t",s[i].Branch);
		    printf("%s\t",s[i].CGPA);
		}
	}
	return 0;
}
