#include<stdio.h>

int main()
{
    char ch[100];
    scanf("%s",ch);

    double x,y,z;
    scanf("%lf%lf",&x,&y);

    z=x+(.15*y);
    printf("TOTAL = R$ %.2f\n",z);
    return 0;
}

