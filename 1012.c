#include<stdio.h>

int main()
{

    float a,b,c,A;
    scanf("%f%f%f",&a,&b,&c);
    A=.5*a*c;
    printf("TRIANGULO: %.3f\n",A);
    A=3.14159*c*c;
    printf("CIRCULO: %.3f\n",A);
    A=.5*c*(a+b);
    printf("TRAPEZIO: %.3f\n",A);
    A=b*b;
    printf("QUADRADO: %.3f\n",A);
    A=a*b;
    printf("RETANGULO: %.3f\n",A);
    return 0;

}

