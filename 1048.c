#include<stdio.h>

int main()
{
    float n;
    scanf("%f",&n);
    if(n>=0&&n<=400.00)
    {
        printf("Novo salario: %.2f\n",n+.15*n);
        printf("Reajuste ganho: %.2f\n",n*.15);
        printf("Em percentual: 15 %%\n");
    }
    else if(n>=400.01&&n<=800.00)
    {
        printf("Novo salario: %.2f\n",n+.12*n);
        printf("Reajuste ganho: %.2f\n",n*.12);
        printf("Em percentual: 12 %%\n");
    }
    else if(n>=800.01&&n<=1200.00)
    {
        printf("Novo salario: %.2f\n",n+.10*n);
        printf("Reajuste ganho: %.2f\n",n*.10);
        printf("Em percentual: 10 %%\n");
    }
    else  if(n>=1200.01&&n<=2000.00)
    {
        printf("Novo salario: %.2f\n",n+.07*n);
        printf("Reajuste ganho: %.2f\n",n*.07);
        printf("Em percentual: 7 %%\n");
    }
    else if(n>2000.00)
    {
        printf("Novo salario: %.2f\n",n+.04*n);
        printf("Reajuste ganho: %.2f\n",n*.04);
        printf("Em percentual: 4 %%\n");
    }

}

