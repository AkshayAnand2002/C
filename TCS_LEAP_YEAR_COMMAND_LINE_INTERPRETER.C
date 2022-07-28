/*
Write a c program, to check whether the given year is a leap year or not using command 
line arguments. A leap year is a calendar year containing one additional day (Feb 
29th) added to keep the calendar year synchronized with the astronomical year.
*/
#include<stdio.h>
int main(int a,char *b[]){
    int year;
    year=atoi(b[1]);
    if(year%100==0){
        if(year%400==0){
            printf("LEAP YEAR");
        }
        else{
            printf("NOT A LEAP YEAR");
        }
    }
    else if(year%4==0){
        printf("LEAP YEAR");
    }
    else{
        printf("NOT A LEAP YEAR");
    }
    return 0;
}
