#include<stdio.h>

int main()
{
    int a[5];
    int i,count=0,c2=0,c3=0,c4=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if((a[i]%2)==0)
        {
            count++;
        }
         if((a[i]%2)!=0)
        {
            c2++;
        }

        if((a[i])>0)
        {
            c3++;
        }
         if((a[i])<0)
        {
            c4++;
        }

    }
    printf("%d valor(es) par(es)\n",count);
    printf("%d valor(es) impar(es)\n",c2);
    printf("%d valor(es) positivo(s)\n",c3);
    printf("%d valor(es) negativo(s)\n",c4);
}

