/*C program to convert a decimal number to binary and print the count of 1's in it. If 1's are not present in binary number, then print invalid input.
Input: 134
Output: 3
*/
#include<stdio.h>
int main()
{
    int n, rem ,f=1,count=0, bin=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%2;//gives 1 if odd no else 0.
       if(rem == 1)
            count++;//counting no. of 1s
        bin = bin + rem * f;//converting to binary form
        f = f * 10;//multiplying by place value
        n = n / 2;//n reduced by half.
    }
    if(count > 0){
        printf("%d\n",bin);
        printf("%d", count);
    }
    else{
        printf("%d\n",bin);
        printf("invalid");
    }
    return 0;
}
