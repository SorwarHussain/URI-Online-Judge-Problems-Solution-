#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    char ch;
    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&a[i],ch);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d%c\t",a[i],ch);
    }
}
