// REPLACING ALL 0S WITH 1S IN A GIVEN INTEGER
#include <stdio.h>
int main()
{
    int num,num2=0;
    printf("ENTER NUMBER: ");
    scanf("%d",&num);
    if(num==0){
        num2=1;
    }
    while(num>0){
        int rem=num%10;
        if(rem==0){
            rem=1;
        }
        num=num/10;
        num2=num2*10+rem;
    }
    num=0;//above we got changed no but it is reversed.
    while(num2>0){
        int r=num2%10;
        num=num*10+r;
        num2/=10;
    }//again reversed to get changed no reversed .
    printf("CONVERTED NO. IS: %d.",num);
    return 0;
}
