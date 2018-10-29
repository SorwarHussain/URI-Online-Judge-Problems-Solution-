#include<stdio.h>

int main()
{
    float a[3],av;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f%f%f",&a[1],&a[2],&a[3]);
        av=(a[1]*2+a[2]*3+a[3]*5)/10;
        printf("%.1f\n",av);
    }

}

