/*
Write a program to find the difference between the elements at odd index and even index.
Note : You are expected to write code in the findDifference function only which receive 
the first parameter as the numbers of items in the array and second parameter as the array itself. 
You are not required to take the input from the console.
Example
Input
input 1 : 7
input 2 : 10 20 30 40 50 60 70
Output
40

Explanation
The first parameter 7 is the size of the array. 
Sum of element at even index of array is 10 + 30 + 50 + 70 = 160 
and sum of elements at odd index of array is 20 + 40 + 60 = 120. 
The difference between both is 40
*/
#include<stdio.h>
int findDifference(int n,int arr[]){
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even=even+arr[i];
        }
        else{
            odd=odd+arr[i];
        }
    }
    return even-odd;
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int result=findDifference(n,array);
    printf("%d",result);
    return 0;
}
