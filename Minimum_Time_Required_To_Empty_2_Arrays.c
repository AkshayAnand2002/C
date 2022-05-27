/*
Problem
You are given two arrays each of size ,  and  consisting of the first  positive integers each exactly once, that is, they are permutations. 
Your task is to find the minimum time required to make both the arrays empty. The following two types of operations can be performed any number of times each taking 1 second:
In the first operation, you are allowed to rotate the first array clockwise.
In the second operation, when the first element of both the arrays is the same, they are removed from both the arrays and the process continues.
Input format
The first line contains an integer , denoting the size of the array.
The second line contains the elements of array .
The third line contains the elements of array .
Output format
Print the total time taken required to empty both the array.
Constraints
Sample Input
3
1 3 2
2 3 1
Sample Output
6
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Perform operation 1 to make a = 3, 2, 1
Perform operation 1 to make a = 2, 1, 3
Now perform operation 2 to make a = 1, 3 and b = 3, 1
Perform operation 1 to make a = 3, 1
Now perform operation 2 to make a = 1 and b =  1
Now perform operation 2 to make a = {} and b =  {}
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	printf("ENTER THE NUMBER OF ELEMENTS IN ARRAYS: ");
	scanf("%d",&num);
	int *arr1,*arr2;
	arr1=(int*)malloc(sizeof(int)*num);
	arr2=(int*)malloc(sizeof(int)*num);
	for(int i=0;i<num;i++){
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<num;i++)
	    scanf("%d",&arr2[i]);
	int time=0;
    int start=0;//pointer
    for(int i=0;i<num;i++)
    {
        while(arr1[start]!=arr2[i])
        {
            if(arr1[start]!=0)  
            time++ ;       //increase time if already visited
            start=(start+1)%num;    //else simply increase the pointer value
        }
        arr1[start]=0;
        time++; //increase time for removing first element
    }
//Time complexity O(n^2)
    printf("%d",time); // Writing output to STDOUT
}

