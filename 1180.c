#include<stdio.h>
int main()
{
    int n[1000],a,i,s,p=0;

    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
         scanf("%d",&n[i]);
    }


    s=n[p];

    for(i=0; i<a ;i++)
    {
        if(n[i] < s)
        {
            p=i;
            s=n[i];
        }
    }

    printf("Menor valor: %d\n", n[p]);
    printf("Posicao: %d\n",p);
    return 0;
}
