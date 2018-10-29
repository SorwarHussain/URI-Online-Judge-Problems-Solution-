#include<stdio.h>


int main()
{
    int x,i,sum,n,j;
    scanf("%d",&n);

    for(j=1; j<=n; j++)
    {
        sum=0;
        scanf("%d",&x);
        for(i=1; i<x; i++)
        {
            if(x%i==0)
            {
                sum+=i;

            }
        }
        if(sum==x)
        {
            printf("%d eh perfeito\n",x);
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
        }
    }








    return 0;
}
