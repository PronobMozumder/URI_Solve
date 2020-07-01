#include<stdio.h>
int main()
{
    int i,j,k,ara1[20],ara2[20];

    for(i=0; i<20; i++)
    {
        scanf("%d",&ara1[i]);
        ara2[19-i]=ara1[i];
    }

    for(k=0; k<20; k++)
    {
        printf("N[%d] = %d\n",k,ara2[k]);
    }
    return 0;
}
