//https://www.codechef.com/LTIME69A/problems/AVG
//https://www.youtube.com/watch?v=Vv0_aS7G6sc
#include <stdio.h>
int main(void) {
    int T,i;
    int N,K,V,A[1000];
    scanf("%d\n",&T);
    while(T--)
    {
        int s=0,r,u;
        scanf("%d %d %d\n",&N,&K,&V);
        for(i=0;i<N;i++)
        {
        scanf("%d ",&A[i]);
        s=s+A[i];
        }
        u=((N+K)*V)-s;
        r=u/K;
        if(r>0 && (u%K==0))
        printf("%d\n",r);
        else
        printf("-1\n");
    }
	return 0;
}
