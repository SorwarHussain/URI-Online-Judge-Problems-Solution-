#include<stdio.h>


int main()
{
    int n,sum=0,count=0;
    float avr;
    while(scanf("%d",&n)&&n>=0)
    {
        sum+=n;
       count++;

    }

   // printf("%d\n",sum);
    //printf("%d",count);
    avr=(sum+0.0)/count;

    printf("%.2f\n",avr);

}
