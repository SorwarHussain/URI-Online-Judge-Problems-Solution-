/* 27-09-18>>>>>>2:15 AM */
#include<stdio.h>

int main()
{
    int i,j;
    char O;
    double M[12][12],average,sum=0.0;
    scanf("%c",&O);
    for(i=0; i<12; i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
        }

    }
     for(i=0; i<12; i++)
    {
        for(j=0;j<12;j++)
        {
            if(i<j)
            {
                sum+=M[i][j];

            }

        }


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
/* 27-09-18>>>>>>2:31 AM */


