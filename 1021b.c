#include<stdio.h>
int main()
{

    int a,b,c,d,e,f,g,h,i,j,k,l,m,o,s,w,p,q,r,t,u,v;
    float n;
    scanf("%f",&n);
    a=n/100;
    b=n%100;
    c=b/50;
    d=b%50;
    e=d/20;
    f=d%20;
    g=f/10;
    h=f%10;
    i=h/5;
    j=h%5;
    k=j/2;
    l=j%2;

    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",a,c,e,g,i,k);

    m=l/1;
    n=l%1;
    o=n/.50;
    p=n%.50;
    q=p/.25;
    r=p%.25;
    s=r/.10;
    t=r%.10;
    u=t/.05;
    v=t%.05;
    w=v/.02;
    printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",m,o,q,s,u,w);

    return 0;




}
