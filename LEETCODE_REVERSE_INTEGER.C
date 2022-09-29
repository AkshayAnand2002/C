/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
*/
int reverse(int x){
    long result = 0;
    bool flag = true;
    if(x < 0){
        if(x == -2147483648){
            return 0;
        }
        x = (-1) * x;
        flag = false;
    }
    while(x != 0){
        if((10 * result) >= 2147483647l){
            return 0;
        }
        result = result * 10 + x % 10;
        x = x / 10;
    }
    if(!flag){
        result = (-1) * result;
    }
    return result;
}
