#include<stdio.h>

int main()
{
    float I,J;
    int i,j;
    for(I=0;I<=2.1;I+=.2)
    {
        for(J=I+1;J<=I+3.1;J++)
        {
            if((I>0&&I<1)||(I>1&&I<2))
            {
                printf("I=%.1f J=%.1f\n",I,J);
            }
            else
            {
                i=I;
                j=J;
                printf("I=%d J=%d\n",i,j);
            }


        }

    }

}

