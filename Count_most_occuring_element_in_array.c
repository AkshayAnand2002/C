#include<stdio.h>
int getMaxRepeatingElement(int array[], int n){
int i,j,maxElement,count;
int maxCount=0;
for(i=0;i<n;i++){//for loop for holding each element
   count=1;
   for(j=i+1;j<n;j++){//for loop to check for duplicate elements
    if(array[j] == array[i]){
        count++;
        if(count > maxCount){//if count of current element > maxCount then update maxElement.
            maxElement = array[j];
        }
    }
   }
}
return maxElement;
}
int main(){
int n;
printf("ENTER NO. OF ELEMENTS: ");
scanf("%d",&n);
int array[n];//array declaration
printf("ENTER THE ARRAY ELEMENTS: \n");
for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
}
int maxElement= getMaxRepeatingElement(array,n);//function call
printf("MAXIMUM REPEATING ELEMENT : %d",maxElement);
return 0;
}
