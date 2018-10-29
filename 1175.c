#include<stdio.h>


int main()
{
    int N[20],i,j;
    for(i=0;i<20;i++)
    {
        scanf("%d",&N[i]);

    }
     for(j=0,i=19;i>=0;j++,i--)
    {
            printf("N[%d] = %d\n",j,N[i]);

    }
    return 0;

}
/*
2333
1
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20*/

