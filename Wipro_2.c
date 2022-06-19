/*
Write a program to implement a bubble sort algorithm for sorting the elements of an array.
Input Format:
The first line corresponds to the size of an array.
The second line corresponds to the elements.
Output Format:
Print the element in ascending order.
Sample Input:
6
11 15 26 38 9 10 
Sample Output:
9 10 11 15 26 38
Solution:
Input -
6
45 8 15 91 74 5
*/
#include <stdio.h>
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
}
int main()
{
    int arr[100], i, n, step, temp;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
