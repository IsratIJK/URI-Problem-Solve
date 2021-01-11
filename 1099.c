#include<stdio.h>
int main()
{
    int N,i,x,y,sum=0,R;
    scanf("%d",&N);
    for(R=1; R<=N; R++)
    {
        scanf("%d%d",&x,&y);
        if(x<y)
        {
            for(i=x+1; i<y; i++)
            {
                if(i%2 != 0)
                {
                    sum=sum+i;
                }

            }
        }


        else if(x>y)
        {
            for(i=y+1; i<x; i++)
            {
                if(i%2 !=0)
                {
                    sum=sum+i;
                }
            }
        }
        else if(x==y)
        {
            sum=0;
        }

        printf("%d\n",sum);

        sum=0;
    }

    return 0;

}

