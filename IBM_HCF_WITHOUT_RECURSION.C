/*
 * C Program to find HCF of a given Number without using Recursion
 */
#include <stdio.h>
int hcf(int, int);
int main()
{
    int a, b, result;
    printf("Enter the two numbers to find their HCF: ");
    scanf("%d%d", &a, &b);
    result = hcf(a, b);
    printf("The HCF of %d and %d is %d.\n", a, b, result);
    return 0;
}
int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
