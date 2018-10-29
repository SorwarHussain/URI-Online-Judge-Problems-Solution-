#include<stdio.h>

int main()
{
    int m,n;

    while(scanf("%d%d",&m,&n)&&m!=n)
    {

        if(m<n)
        {

            printf("Crescente\n");
        }
        else if(m>n)
        {

            printf("Decrescente\n");
        }
    }

}

