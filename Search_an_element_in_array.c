#include<stdio.h>
#define MAX_SIZE 100
int main(){
int array[MAX_SIZE];
int size,i,search,found;
printf("Enter size of array: ");
scanf("%d", &size);
printf("Enter elements in array: ");
for(i=0; i<size; i++)
{
scanf("%d", &array[i]);
}
printf("\nEnter element to search: ");
scanf("%d", &search);
found=0;//assuming initially element not in array
for(i=0;i<size;i++){
    if(array[i]==search){
        found=1;
        break;
    }
}
if(found == 1){
    printf("YES,%d IS FOUND AT POSITION %d.",search,i+1 );
}
else{
    printf("NO,%d IS NOT FOUND IN ARRAY.",search);
}
}
