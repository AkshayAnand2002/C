//Program to print the sum of digit of the given number.
//Input: 152
//Output: 8
#include<stdio.h>
#include<string.h>
int main()
{
  char n[20];
  scanf("%s", n);
  int len = strlen(n);
  int sum = 0;
  for(int i=0; i<len; i++){
               sum += n[i] - '0'; //This line converts and the string elements to numbers and does their sum.
  }
  printf("%d", sum);
  return 0;
}
