#include<stdio.h>

int main()
{
    int v[4],i,j,k,l=0;
    scanf("%d %d %d %d",&v[0],&v[1],&v[2],&v[3]);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            for(k=j+1;k<4;k++)
            {
                if((v[i]+v[j])>v[k]&&(v[i]+v[k])>v[j]&&(v[k]+v[j])>v[i])
                {
                    l=1;
                    break;
                }


            }
        }
    }
    l?puts("S"):puts("N");
}
