#include<stdio.h>

int main()

{
    int t,a,c=0,m[5],i;

    scanf("%d\n",&t);

    for(i=0;i<5;i++)
    {
        scanf("%d",&m[i]);
        if(m[i]==t)
        {
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
