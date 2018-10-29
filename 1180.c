#include<stdio.h>


int main()
{

    int n,i,lowest,count=0;
    scanf("%d",&n);
    int X[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&X[i]);
        lowest=X[0];

    }


     for(i=0;i<n;i++)
    {

       if(X[i]<lowest)
       {
           lowest=X[i];
           count=i;
       }

    }

    printf("Menor valor: %d\n",lowest);
    printf("Posicao: %d\n",count);
    return 0;

}

