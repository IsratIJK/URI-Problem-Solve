#include<stdio.h>
int main()
{
    char name[30];
    float a,b,total;
    gets(name);
    scanf("%f%f",&a,&b);
    total=a+(b*15)/100;
    printf("TOTAL = R$ %0.2f\n",total);
    return 0;
}
