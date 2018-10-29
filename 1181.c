/* 25-09-18>>>>>>11.05 PM */
#include<stdio.h>

int main()
{
    int L,i,j;
    char T;
    double M[12][12],average,sum=0.0;
    scanf("%d",&L);
    scanf("%*c");        //For ignore Enter problem
    scanf("%c",&T);
    for(i=0; i<12; i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
        }

    }
    for(j=0; j<12; j++)
    {

        sum+=M[L][j];
    }
    //printf("Sum=%f\n",sum);
    if(T=='S')
    {
        printf("%.1lf\n",sum);

    }
    else if(T=='M')
    {
        average=sum/12.0;
        printf("%.1lf\n",average);

    }

    return 0;

}
/* 25-09-18>>>>>>4.28 AM */
