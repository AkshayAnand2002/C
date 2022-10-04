#include<stdio.h>
int main(){
    long long int x,y;
    printf("Enter dividend & divisor  : ");
    scanf("%lld %lld", &x, &y);
    long long int ans=0;
    for(int i=30;i>=0;i--){
        long long int a= y<<i;
        
        if(a<=x){
            
            x-=a;
            ans+= 1<<i;

        }       
        
    }
    printf("Quotient is : %lld\nRemainder is: %lld", ans, x);
    return 0;
}
