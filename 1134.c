#include<stdio.h>

int main()
{
    int a,sum=0,count=0,sun=0;

    while(scanf("%d",&a)&&a!=4)
    {
        if(a==1)
        {
            sum++;

        }
        else if(a==2)
        {
            count++;
        }
        else if(a==3)
        {
            sun++;
        }

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",sum);
    printf("Gasolina: %d\n",count);
    printf("Diesel: %d\n",sun);


}
