#include<stdio.h>

int main()
{
    int x,y,i,sum=0;
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        for(i=x; i<=y; i++)
        {
            if(i%13!=0)
            {
                sum+=i;
                //printf("%d\t",i);
            }

        }
        printf("%d\n",sum);

    }
  else if(x>y)
    {
        for(i=x; i>=y; i--)
        {
            if(i%13!=0)
            {
                sum+=i;
                //printf("%d\t",i);
            }

        }
        printf("%d\n",sum);

    }


}
