#include<stdio.h>



int main()
{

    int x,y,n,i,s;

    while(scanf("%d",&n)&&n!=0)
    {

        if(n%2==0)
        {
            s=5*(n+4);
        }
        else
        {
            s=5*(n+5);
        }

        printf("%d\n",s);
    }


    return 0;

}

