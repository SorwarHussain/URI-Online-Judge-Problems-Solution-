#include<stdio.h>

int main()
{
    int n,m,d,i,j;
    int a[6]= {2,5,10,20,50,100};
    while(scanf("%d %d",&n,&m)&&n!=0&&m!=0)
    {
        d=m-n;
        for(i=0; i<6; i++)
        {
            for(j=i+1; j<=6; j++)
            {
                if(d==2)
                {
                    printf("impossible\n");
                    d=0;
                    break;
                }
                else if(a[i]==d)
                {
                    printf("possible\n");
                    d=0;
                    break;
                }
                else if((a[i]+a[j])==d)
                {
                    printf("possible\n");
                    d=0;
                    break;
                }


            }

        }
        if(d!=0)
        {
            printf("impossible\n");
        }

    }
}



