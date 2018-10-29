#include<stdio.h>

int main()
{

    int n,m,i,sum=0;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        for(i=(n+1); i<m; i++)
        {
            if(i%2!=0)
            {

                sum+=i;
            }
        }
        printf("%d\n",sum);

    }
  else if(n>m)
    {
        for(i=(m+1); i<n; i++)
        {
            if(i%2!=0)
            {

                sum+=i;
            }
        }
        printf("%d\n",sum);

    }
    else{
        printf("0");
    }


}

