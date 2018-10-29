#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int x,y;
    float a;
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        a=(x+.0)/y;
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n",a);
        }

    }

}

