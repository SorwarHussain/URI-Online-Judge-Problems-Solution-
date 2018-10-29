#include<stdio.h>


int main()
{
    int x,y,i,j,n=1;
    scanf("%d%d",&x,&y);
    for(i=1;(i+2)<=y;i+=x)
    {
        for(j=1;j<=x;j++)
        {
            printf("%d",n);
            if(j!=x)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
            n++;

        }
        //printf("\n");

    }
}


