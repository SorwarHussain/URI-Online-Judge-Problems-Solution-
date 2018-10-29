#include<stdio.h>

int main()

{
    int n,i;
    scanf("%d",&n);
    char ch[]="Ho";
    for(i=0;i<n;i++)
    {
        if(i==(n-1))
        {
            printf("%s!\n",ch);
        }
        else
        {
            printf("%s ",ch);
        }

    }

    return 0;
}
