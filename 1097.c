#include<stdio.h>

int main()
{
    int I,J;
    for(I=1;I<=9;I+=2)
    {
        for(J=I+6;J>=I+4;J--)
        {
            printf("I=%d J=%d\n",I,J);
        }

    }

}

