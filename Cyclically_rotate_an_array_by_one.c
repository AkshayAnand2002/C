#include<stdio.h>
#include<conio.h>
int main(){
    int n, i, a[100], b[100];
    int choice, temp;
    printf("Enter the number of elements:");
    scanf("%d", &n);    
    for(i=0; i<=n-1; i++)   {
        printf("Enter a value:");
        scanf("%d", &a[i]);
}
    printf("1. Rotate right\n2. Rotate left\n\nEnter your choice:");
    scanf("%d", &choice);
    switch(choice)  {
        case 1: temp = a[n-1];
        for(i=n-1; i>=1; i--)   {
           a[i]=a[i-1];
        }
        a[0]=temp;
        printf("The new array is:\n");

        for(i=0; i<=n-1; i++)   {
            printf("%d\n", a[i]);
        }
        break;
        case 2: temp = a[0];
        for(i=0; i<n-1; i++)    {
             a[i]=a[i+1];
        }
            a[n-1]=temp;
            printf("The new array is:\n");
            for(i=0; i<=n-1; i++)   {
                printf("%d\n", a[i]);
            }   
    }//switch ends
    getch();    
}//main ends
