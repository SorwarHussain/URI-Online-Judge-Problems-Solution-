#include<stdio.h>


int main()
{
    int x,i,n,j,count;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        float y;
        count=0;
        scanf("%d",&x);
        for(j=2; j<x; j++)
        {

            x=x+.0;
            y=x%j;

            if(y!=0)
            {
                count++;

            }

        }

        if(count==(x-2))
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            printf("%d nao eh primo\n",x);
        }

    }
    return 0;
}
