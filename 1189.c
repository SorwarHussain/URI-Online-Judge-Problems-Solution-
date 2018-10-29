/* 4-10-18>>>>>>4:50 AM */
#include<stdio.h>

int main()
{
    int i,j;
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

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            if((i>j)&&(j<(11-i)))
            {
                 //printf("%.2f\t",M[i][j]);
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
        average=sum/30.0;
        printf("%.1lf\n",average);

    }
    return 0;

}












