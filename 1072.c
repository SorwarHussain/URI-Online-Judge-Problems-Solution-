#include<stdio.h>

int main()
{
    int n,i,count=0,count1=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=10&&a[i]<=20)
        {
            count++;
        }
          if(a[i]<10||a[i]>20)
        {
            count1++;
        }
    }
    printf("%d in\n",count);
    printf("%d out\n",count1);
}

