#include <stdio.h>

int main()
{
    int n,x,i=0,nc[]= {10000,5000,2000,1000,500,200,100,50,25,10,05,01};
    double a,nd[]= {10000,5000,2000,1000,500,200,100,50,25,10,05,01};

    scanf("%lf",&a);
    x = a * 100;

    while(i<12)
    {
        if(i == 0)
        {
            printf("NOTAS:\n");
        }
        if(i == 6)
        {
            printf("MOEDAS:\n");
        }


        n = x/nc[i];
        x=x%nc[i];

        if(i>=0 && i < 6)
        {
            printf("%d nota(s) de R$ %0.2lf\n",n,nd[i]/100);
        }
        else
        {
            printf("%d moeda(s) de R$ %0.2lf\n",n,nd[i]/100);
        }
        i++;
    }
    return 0;

}

