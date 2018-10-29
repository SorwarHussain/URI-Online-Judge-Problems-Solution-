#include<stdio.h>

int main()
{
    int c,i;
    scanf("%d",&c);
    int a[c];
    for(i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<c;i++)
    {
        if(a[i]&1)
        {
            printf("1\n");

        }
        else
        {
            printf("0\n");
        }

    }
}
