/*
Given an array of size n, write a function to find the sum of the largest and smallest element in the array.
Input specification:
Input1: integer n, describing the size of the given array.
Input2: integer array, specifying the elements of the array.
Output Specification:
Return an integer as the sum of the smallest and the largest elements in the given array.
Example 1:
Input 1: 4
Input 2: {9,5,0,11}
Output: 11
Explanation:
The largest and smallest elements in the given array are 11 and 0 respectively. Sum of the two elements is 11+0=11
Example 2:
Input 1: 7
Input 2: {-9,15,80,101,4,95,-101}
Output: 0
Explanation:
The largest and smallest elements in the given array are 101 and -101 respectively. Sum of the two elements is 101+(-101)=0
*/
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	    scanf("%d",&a[i]);
	int max=a[0], min=a[0];
	for(int i=1;i<n;i++) {
	    if(a[i] > max)
	        max = a[i];
	    if(a[i] < min)
	        min = a[i];
	}
	int sum = max+min;
	printf("%d",sum);
	return 0;
}
