#include<stdio.h>
int main()
{
    double x1,y1,x2,y2,z;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    z=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%0.4lf\n",z);
    return 0;
}
