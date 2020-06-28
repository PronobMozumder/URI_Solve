#include<stdio.h>
int main()
{
    double n,a,b,s;

    scanf("%lf",&n);

    if(0<=n && n<=400.00)
    {
        int a=15;
        b = n*(a/100);
        s=n+b;
    }
    else if(400.01<=n && n<=800.00)
    {
        int a=12;
        b = n * (a/100);
        s=n+b;
    }
    else if(800.01<=n && n<=1200.00)
    {
        int a=10;
        b = n * (a/100);
        s=n+b;
    }
    else if(1200.01<=n && n<=2000.00)
    {
        int a=7;
        b = n * (a/100);
        s=n+b;
    }
    else if(n>=200)
    {
        int a=4;
        b = n * (a/100);
        s=n+b;
    }


    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %",s,b,a);

return 0;
}
