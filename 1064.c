#include<stdio.h>

int main()
{
    float a[6];
    int i,count=0;
    float x,sum=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a[i]);
        if(a[i]>0)
        {
            count++;
        }
        if(a[i]>0)
        {
           sum+=a[i];
        }

    }
    printf("%d valores positivos\n",count);
    x=sum/count;
    printf("%.1f\n",x);
}

