#include<stdio.h>
int main()
{
    int i,count=0;
    float n,sum=0.0;

    for(i=1;i<=6;i++)
    {
        scanf("%f",&n);

        if(n>0)
        {

            sum = sum+n;
            count++;

        }
    }
    printf("%d valores positivos\n%.1f\n", count,sum/count);
    return 0;
}
