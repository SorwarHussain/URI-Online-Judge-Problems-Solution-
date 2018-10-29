#include<stdio.h>


int main()
{
    int x,i;
    while(scanf("%d",&x)&&x!=0)
    {
        //printf("1 ");
        for(i=1;i<x;i++)
        {
            printf("%d ",i);

        }
        printf("%d",i);

        printf("\n");
    }
    //printf("\n");
    return 0;
}


