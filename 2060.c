#include<stdio.h>
int main()
{
    int n,i,j,a=0,b=0,c=0,d=0;
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++)
    {
        if(m[i]%2==0)
        {
            a++;
        }
        if(m[i]%3==0)
        {
            b++;
        }
        if(m[i]%4==0)
        {
            c++;
        }
        if(m[i]%5==0)
        {
            d++;
        }
    }
    printf("%d Multiplo(s) de 2\n",a);
    printf("%d Multiplo(s) de 3\n",b);
    printf("%d Multiplo(s) de 4\n",c);
    printf("%d Multiplo(s) de 5\n",d);
}
