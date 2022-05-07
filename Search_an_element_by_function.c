#include<stdio.h>
int main(){
	int n,s,i,a[100];
	printf("Enter the element to be searched:");
	scanf("%d",&n);
	printf("Enter array size:");
	scanf("%d",&s);
	printf("Enter the elements:");
	for(i=0;i<s;i++){
		scanf("%d",&a[i]);
	}
	search(n,s,a);
}
void search(int num,int size,int a[]){
	int j;
	int flag = 0;
	for(j=0 ; j<size ; j++){
		if(a[j]== num){
			flag =1;
			break;
		}
	}
	if(flag==1){
		printf("The entered number is formed at %d index.",j);
	}
	else{
		printf("The number is not present.");
	}
}

