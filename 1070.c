#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
       {
            printf("%d\n%d\n%d\n%d\n%d\n%d\n",n+2,n+4,n+6,n+8,n+10,n+12);
       }
    else
        {
            printf("%d\n%d\n%d\n%d\n%d\n%d\n",n+1,n+3,n+5,n+7,n+9,n+11);
        }
}

