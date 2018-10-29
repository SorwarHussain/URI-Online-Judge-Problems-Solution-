#include<stdio.h>

int main()
{
    int a,b,x,y;
    float c,z,m;
    scanf("%d%d%f",&a,&b,&c);
    scanf("%d%d%f",&x,&y,&z);
    m=(b*c)+(y*z);
    printf("VALOR A PAGAR: R$ %.2f\n",m);

    return 0;


}

