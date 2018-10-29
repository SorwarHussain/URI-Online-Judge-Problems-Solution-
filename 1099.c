#include<stdio.h>

int main()
{
    int n,j,count,sum;
    scanf("%d",&n);
    int i,x,y;
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        sum=0;
        count=0;
        if(x<y)
        {
            for(j=x+1; j<y; j++)
            {
                if(j%2!=0)
                {
                    count+=j;


                }
            }printf("%d\n",count);


        }
        else if(x==y)
        {
            printf("0\n");

        }
        else
        {
            for(j=y+1; j<x; j++)
            {
                if(j%2!=0)
                {
                    sum+=j;


                }
            }
            printf("%d\n",sum);

        }


    }

}

