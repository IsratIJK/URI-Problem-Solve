#include<stdio.h>
int main()
{
    int n,i,ar[50];
    scanf("%d",&n);
    ar[0]=0;
    ar[1]=1;
    for(i=2;i<n;i++){
        ar[i]=ar[i-1]+ar[i-2];
    }
        printf("0");
    for(i=1;i<n;i++){
        printf(" %d",ar[i]);
    }
    printf("\n");
    return 0;
}
