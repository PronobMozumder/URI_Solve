#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A>=(B+C))
    {
        printf("NAO FORMA TRIANGULO\n");

    }
    if(A*A==(B*B + C*C))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if(A*A>(B*B + C*C))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(A*A<(B*B +C*C))
    {
        printf("TRIANGLO ACUTANGULO\n");
    }
    if(A==B==C)
    {
     printf("TRIANGULO EQUILATERO\n");
    }
    if(((A==B)&& (A==B)!=C) || ((A==C)&& (A==C)!=B))
    {
        printf("TRIANGULO ISOSCELES");
    }


    return 0;
}
