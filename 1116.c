#include<stdio.h>
int main()
{
    float a,sum=0;
    int count=0;
    while(count<2){
        scanf("%f",&a);
        if(a<0.0)printf("nota invalida\n");
        else if(a>10.0)printf("nota invalida\n");
        else{
            count++;
            sum+=a;
        }
    }
    printf("media = %0.2f\n",sum/count);
    return 0;
}
