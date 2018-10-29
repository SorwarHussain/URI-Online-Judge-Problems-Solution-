#include<stdio.h>

int main()

{
    int n,l,ca=1,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        l=(n*(n+1)/2)+1;
        if(l==1)
        {
            printf("Caso %d: %d numero\n",ca,l);
            printf("0");
        }
        else
        {
            printf("Caso %d: %d numeros\n",ca,l);
            printf("0");
            for(i=1; i<=n; i++)
            {

                for(j=1; j<=i; j++)
                {
                    printf(" %d",i);

                }


            }
        }

        printf("\n\n");
        ca++;
    }

    return 0;
}
