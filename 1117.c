#include<stdio.h>

int main()
{
    float x,y,a;
    while(scanf("%f",&x)&&(x<0||x>10))
    {

        printf("nota invalida\n");

    }


    while(scanf("%f",&y)&&(y<0||y>10))
    {


        printf("nota invalida\n");

    }
    //printf("%f\t%f",x,y);
    a=(x+y)/2.0;
    printf("media = %.2f\n",a);
    int z;
    while(scanf("%d",&z)&&z!=2)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        if(z==1)
        {

            while(scanf("%f",&x)&&(x<0||x>10))
            {

                printf("nota invalida\n");

            }


            while(scanf("%f",&y)&&(y<0||y>10))
            {


                printf("nota invalida\n");

            }
            //printf("%f\t%f",x,y);
            a=(x+y)/2.0;
            printf("media = %.2f\n",a);
        }


    }
    printf("novo calculo (1-sim 2-nao)\n");




    return 0;


}

