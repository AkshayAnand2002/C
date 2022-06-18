/*Program to rotate the given number of array
Input:
6
1 2 3 4 5 6
2
Output:
3       4       5       6       1       2
*/
#include<stdio.h>
int main(){
               int n, r, j=0;
               scanf("%d", &n);
               int a[n];
               for(int i=0;i<n;i++)
                            scanf("%d", &a[i]);
               scanf("%d", &r);
               int temp[n-r];
               for(int i=r;i<n;i++)
                              temp[i-r] = a[i];
               for(int i=(n-r);i<n;i++){
                              temp[i] = a[j];
                              j++;
               }
               for(int i=0;i<n;i++)
                              printf("%d\t", temp[i]);
               return 0;
}
