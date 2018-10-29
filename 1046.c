#include<stdio.h>

int main()
{
    int a,c,x;
    scanf("%d%d",&a,&c);
    x=c-a;
    if(a==c)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(x<0)
    {
        x=24+c-a;
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }

    return 0;
}

