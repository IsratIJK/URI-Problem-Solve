#include<stdio.h>

int main()
{
    long long int r1=1, r2=1, p, q, i, j;
    while(scanf("%lld%lld",&p,&q)!=EOF)
    {
        for(i=1; i<=p; i++)
        {
            r1=r1*i;
        }
        for(j=1; j<=q; j++)
        {
            r2=r2*j;
        }
        printf("%lld\n",r1+r2);
        r1=1,r2=1;
        
    }
    return 0;
}  