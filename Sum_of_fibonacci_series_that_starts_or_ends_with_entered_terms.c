#include <stdio.h>
#include <math.h>
int main()
{
      int f1,f2,f3,n,i=2;
      printf("How many terms do you \nwant in Fibonacci Series? : ");
      scanf("%d",&n);
      printf("\nEnter first term of series  : ");
      scanf("%d",&f1);
      printf("\nEnter second term of series : ");
      scanf("%d",&f2);
      printf("\nFibonacci Series :\n\n");
      printf("%d, %d",f1,f2);
      int s=f1+f2;
      while(i<n)
      {
            f3=f1+f2;
            printf(", %d",f3);
            f1=f2;
            f2=f3;
            s=s+f3;
            i++;
      }
      printf("\nSum of above Fibonacci series : %d",s);
      return 0;
}

