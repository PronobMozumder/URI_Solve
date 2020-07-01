#include<stdio.h>
int main()
{
    int i , j ,k ,n;
    long long int f[100];

    scanf("%d", &n);

    f[0]=0;
    f[1]=1;
    for(i=2;i<100;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }

    for(i=0;i<n;i++)
    {
        scanf("%d", &j);
        printf("Fib(%d) = %lld\n", j, f[j]);
    }

    return 0;
}
