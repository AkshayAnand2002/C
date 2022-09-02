//REVERSE ORDER OF WORDS IN STRING.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int i,j,len,startindex,endindex;
    printf("PLS. ENTER A STRING: ");
    gets(str);
    len=strlen(str);
    endindex=len-1;
    printf("\nENTERED STRING IN REVERSE ORDER: ");
    for(i=len-1;i>=0;i--){
        if(str[i]==' '|| i==0){
        if(i==0){
            startindex=0;
        }
        else{
            startindex=i+1;
        }
        for(j=startindex;j<=endindex;j++){
            printf("%c",str[j]);
        }
        endindex=i-1;
        printf(" ");
    }
    }
    return 0;
}
/*
User entered values in this C program to reverse words in a string
str[] = Hello World
len = 11
endIndex = len – 1 = 10
For Loop – First Iteration: for(i = len – 1; i >= 0; i–)
for(i = 10; 10 >= 0; 10–)
Next, it will enter into the If Statement to check whether the str[i] is equal to empty space or i = 0
This condition will be true once it reaches to empty space after World
for(i = 5; 5 >= 0; 5–)
if(str[5] == ‘  ‘ || 5 == 0) – Condition is True so, it will enter into next If statement
if(i == 0) => if(5 == 0) – Condition is False so, statement inside the else block will be executed
startIndex = i + 1
startIndex = 6
Second For Loop – First Iteration: for(j = startIndex; j <= endIndex; j++)
=> for(j = 6; 6 <= 10; 6++)
Within the For Loop we used C Programming printf statement to print single character
printf(“%c”, str[j]) => W
Do the same for j = 7, j = 8, j= 9, and j = 10. Next, it will start the First For Loop iteration where i = 4.
Do the same for i = 4, i = 3, i = 2, i = 1 and i = 0 in the reverse words in a given string in c program
*/
