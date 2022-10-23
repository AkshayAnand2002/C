//https://www.hackerrank.com/challenges/maximum-draws/problem?isFullScreen=true
#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    int colors[t],ans[t];
    for (i = 0; i < t ; i++){
        scanf("%d",&colors[i]);
        ans[i] = colors[i] + 1;
    }
    for (i = 0; i < t ; i++){
        printf("%d \n",ans[i]);
    }
    return 0;
}
