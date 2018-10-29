#include<stdio.h>

int main()
{
    float a,b,c,p;
    scanf("%f %f %f",&a,&b,&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
       p=a+b+c;
        printf("Perimetro = %.1f\n",p);

    }
    else
    {
         p=.5*(a+b)*c;
        printf("Area = %.1f\n",p);
    }

}
