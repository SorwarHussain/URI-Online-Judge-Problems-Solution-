#include<stdio.h>

int main()

{
    int n,i;
    float l;
    scanf("%d",&n);
    char ch[10000];
    for(i=0;i<n;i++)
   {

           scanf("%s",ch);
            l=strlen(ch);
            printf("%.2f\n",l*.01);
   }

    return 0;
}
