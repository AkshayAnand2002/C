/*
Given an integer num, repeatedly add all its digits until the result 
has only one digit, and return it.
Example 1:
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:
Input: num = 0
Output: 0
*/
/*
The assert. h header file of the C Standard Library provides a macro called assert 
which can be used to verify assumptions made by the program and print a diagnostic 
message if this assumption is false.
*/
#include <stdio.h>
#include <assert.h>
int adddigits0(int num){
    int ans=0;
    while(num>0){
        ans+=num%10;
        num/=10;
        if(ans>=10){
            ans=ans/10+ans%10;
        }
    }
    return ans;
}
int addDigits(int num){
    
    while(num/10){
        int sum = 0;
        while(num){
            sum += num%10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
int adddigits(int num){
    return 1+(num-1)%9;
}
int main(){
    assert(adddigits(0) == 0);
    assert(adddigits(1) == 1);
    assert(adddigits(9) == 9);
    assert(adddigits(38) == 2);
    assert(adddigits(12345) == 6);
    //assert is used to get diagnostic message if 
    //adddigits output is wrong.
    //if RHS output is wrong then output shows error message.
    printf("%d\n",adddigits(38));
    printf("%d\n",adddigits0(38));
    printf("%d",addDigits(38));
    return 0;
}
