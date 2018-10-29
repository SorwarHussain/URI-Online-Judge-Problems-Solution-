#include<stdio.h>

int main()
{
    int N[1000],i,n,j;
    scanf("%d",&n);
    for(i=0; i<1000;)
    {
        for(j=0; j<n; j++)
        {
            printf("N[%d] = %d\n",i,j);
            i++;
            if(i==1000)
            break;
        }
    }
}
