#include<stdio.h>



int main()
{

    int x,y,n,s;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&x,&y);
        if(x%2==0)
        {
            s=(y*.5)*(2*(x+1)+(y-1)*2);
        }
        else
        {
            s=(y*.5)*(2*x+(y-1)*2);
        }

        printf("%d\n",s);
    }


    return 0;

}
