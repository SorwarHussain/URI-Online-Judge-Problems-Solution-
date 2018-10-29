
#include<stdio.h>


int main()
{

    int i,Highest,position;
    int X[100];
    for(i=0;i<100;i++)
    {
        scanf("%d",&X[i]);
        Highest=X[0];

    }


     for(i=0;i<100;i++)
    {

       if(Highest<X[i])
       {
           Highest=X[i];
           position=i+1;
       }

    }

    printf("%d\n",Highest);
    printf("%d\n",position);
    return 0;

}

