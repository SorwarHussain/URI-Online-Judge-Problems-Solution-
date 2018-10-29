#include<stdio.h>


int main()
{
    int i,N[10],v;
    scanf("%d",&v);
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,v);
        v*=2;

    }

    return 0;

}

