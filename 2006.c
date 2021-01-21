#include<stdio.h>
int main()
{
    int a,b,c,d,e,count=0,x;
    while(scanf("%d",&x)!=EOF){
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        if(x==a)count++;
        if(x==b)count++;
        if(x==c)count++;
        if(x==d)count++;
        if(x==e)count++;
        printf("%d\n",count);
    }
    return 0;
}
