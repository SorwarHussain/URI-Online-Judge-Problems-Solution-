#include<stdio.h>

int main()
{
    int n;
    float a;
    scanf("%f%d",&a,&n);
    if(a==1)
    {
        printf("Total: R$ %.2f\n",n*4.00);
    }
   else if(a==2)
    {
        printf("Total: R$ %.2f\n",n*4.50);
    }
    else if(a==3)
    {
        printf("Total: R$ %.2f\n",n*5.00);
    }
    else if(a==4)
    {
        printf("Total: R$ %.2f\n",n*2.00);
    }
    else if(a==5)
    {
        printf("Total: R$ %.2f\n",n*1.50);
    }
}

