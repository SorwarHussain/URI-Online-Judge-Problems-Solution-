/* 27-09-18>>>>>>2:10 AM */
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
            scanf("%lf",&M[j][i]);
        }

    }
    for(i=0; i<12; i++)
    {

        sum+=M[L][i];
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
/* 27-09-18>>>>>>2:10 AM */

