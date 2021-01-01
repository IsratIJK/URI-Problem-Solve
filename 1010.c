#include<stdio.h>
int main()
{
    int a1,b1,a2,b2;
    float c1,c2,total;
    scanf("%d%d%f",&a1,&b1,&c1);
    scanf("%d%d%f",&a2,&b2,&c2);
    total=(b1*c1)+(b2*c2);
    printf("VALOR A PAGAR: R$ %0.2f\n",total);
    return 0;
}
