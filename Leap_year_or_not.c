#include<stdio.h>
int main(){
int year;
printf("ENTER THE YEAR: ");
scanf("%d",&year);
if(year%100==0){
    if(year%400==0){
        printf("%d IS A LEAP YEAR.\n",year);
    }
    else{
        printf("%d IS NOT A LEAP YEAR.\n",year);
    }
}
else{
    if(year%4==0){
       printf("%d IS A LEAP YEAR.\n",year);
    }
    else{
        printf("%d IS NOT A LEAP YEAR.\n",year);
    }
}
return 0;
}
