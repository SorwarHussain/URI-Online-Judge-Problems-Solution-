/* 2-10-18>>>>>>3:44 PM */
#include<stdio.h>

int main()
{
    int i,j,a=12,b=12;
    char O;
    double M[12][12],average,sum=0.0;
    scanf("%c",&O);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&M[i][j]);
        }

    }

    for(i=0; i<(a-1); i++)
    {
        for(j=0; j<(b-1); j++)
        {
            //printf("%.2f\t",M[i][j]);
            sum+=M[i][j];

        }
        b--;


    }

    if(O=='S')
    {
        printf("%.1lf\n",sum);

    }
    else if(O=='M')
    {
        average=sum/66.0;
        printf("%.1lf\n",average);

    }
    return 0;

}
/* 2-10-18>>>>>>7:05 PM */





