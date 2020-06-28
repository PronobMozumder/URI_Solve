#include <stdio.h>

int main()

{

    double a,b,c,d,x;

    scanf("%lf %lf %lf",&a,&b,&c);


    if (a < b + c && b < a + c && c < a + b)

    {
        d=a + b + c;
        printf("Perimetro = %.1f\n", d);

    }

    else

    {
        x=c * (a + b) / 2;
        printf("Area = %.1f\n", x);

    }

    return 0;

}
