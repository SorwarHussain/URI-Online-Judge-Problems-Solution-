#include<stdio.h>

int main()
{
    int x,y,a,sum=0,count=0,sun=0,cou=0;
    scanf("%d%d",&x,&y);
    printf("Novo grenal (1-sim 2-nao)\n");
    if(x>y)
        {
            count=1;
        }
    else if(y>x)
        {
            sun=1;
        }
        else
        {
            cou=1;
        }

    while(scanf("%d",&a)&&a==1)
    {

        scanf("%d%d",&x,&y);
        sum++;
        printf("Novo grenal (1-sim 2-nao)\n");
        if(x>y)
        {
            count++;
        }
        if(y>x)
        {
            sun++;
        }
        if(x==y)
        {
            cou++;
        }



    }
    printf("%d grenais\n",sum+1);
    printf("Inter:%d\n",count);
    printf("Gremio:%d\n",sun);
    printf("Empates:%d\n",cou);
    if(count>sun)
    {
        printf("Inter venceu mais\n");
    }
    else if(sun>count)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Não houve vencedor\n");
    }





    return 0;


}



