#include <stdio.h>
int main ()
{
double A,B,C,T,Rc,Tr, S, R,pi=3.14159;
scanf("%lf",&A);
scanf("%lf",&B);
scanf("%lf",&C);

T= (.5* A * C);
Rc= pi*C*C;
Tr= ((A+B)/2)*C;
S= (B*B);
R= A*B;

printf("TRIANGULO: %0.3lf\n",T);
printf("CIRCULO: %0.3lf\n",Rc);
printf("TRAPEZIO: %0.3lf\n",Tr);
printf("QUADRADO: %0.3lf\n",S);
printf("RETANGULO: %0.3lf\n",R);
return 0;
}
