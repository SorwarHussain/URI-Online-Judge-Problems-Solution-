#include<stdio.h>

int main()
{
    int m,n,i,sum,count,j;

    while(scanf("%d%d",&m,&n)&&m>0&&n>0)
    {
        sum=0,count=0;
        if(m<n)
        {
            for(i=m; i<=n; i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
        }
        else if(m>n)
        {
            for(i=n; i<=m; i++)
            {
                printf("%d ",i);
                count+=i;
            }
            printf("Sum=%d\n",count);
        }
    }

}

