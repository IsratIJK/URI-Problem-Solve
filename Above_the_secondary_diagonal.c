#include<stdio.h>
int main()
{
    double M[12][12],sum;
    char c[10];
    scanf("%s",&c);
    int n=1,i,j;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(i = 10;i >=0;i--){
        for(j = 0;j < n;j++){
            sum += M[i][j];
        }
        n++;
    }
    if (c[0]=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/66.0);
    return 0;
}
