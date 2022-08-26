/*
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
Given an integer n, return true if n is an ugly number.
Example 1:
Input: n = 6
Output: true
Explanation: 6 = 2 × 3
Example 2:
Input: n = 1
Output: true
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
Example 3:
Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.
*/
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
bool isugly(int num){
    if(num<=0) return false;
    while(num>1){
        bool flag=false;
        if(num%2==0){
            flag=true;
            num/=2;
        }
        if(num%3==0){
            flag=true;
            num/=3;
        }
        if(num%5==0){
            flag=true;
            num/=5;
        }
        if(!flag) return false;
    }
    return true;
}
int main()
{
    printf("%d",isugly(6));
    //assert(isugly(14) == true);
    //output of above line: a.out: main.c:43: main: Assertion `isugly(14) == true' failed.
    return 0;
}
//OUTPUT-1
