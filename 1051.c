#include<stdio.h>
int main()
{
    double n,x;

    scanf("%lf",&n);

    if(n>=0.00 && n<=2000.00)
    {
       printf("Isento\n");
    }

    else if(n>=2000.01 && n<=3000.00)
    {
        n-=2000;
        x=(n*.08);
        printf("R$ %0.2lf\n",x);
    }

    else if(n>=3000.01 && n<=4500.00)
    {
        n-=3000;
        x=n*.18;
        printf("R$ %0.2lf\n",x);
    }

    else if(n>=4500.00)
    {
        n-=4500;
        x=n*.28;
        printf("R$ %0.2lf\n",x);
    }


    return 0;
}

