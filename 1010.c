#include<stdio.h>
int main()
{
    int n,i,t,x,y;

    scanf("%d",&t);
    if(t<=41000)
        for(i=1; i<=t; i++)
        {
            scanf("%d%d",&x,&y);
            if(x >= 1 && y<=200)
                printf("Case %d: %d\n",i,(x*y)/2);
        }
}
