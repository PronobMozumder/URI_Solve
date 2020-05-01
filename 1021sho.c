#include<stdio.h>
int main()
{
    float n;
    int a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%f",&n);

    a=(n/100);
    b=((n-(a*100))/50);
    c=(((n-(a*100))-(b*50))/20);
    d=(((n-(a*100))-(b*50)-(c*20))/10);
    e=(((n-(a*100))-(b*50)-(c*20)-(d*10))/5);
    f=(((n-(a*100))-(b*50)-(c*20)-(d*10)-(e*5))/2);
    g=(((n-(a*100))-(b*50)-(c*20)-(d*10)-(e*5)-(f*2))/1);
    h=(((n-(a*100))-(b*50)-(c*20)-(d*10)-(e*5)-(f*2)-(g*1))/0.5);
    i=(((n-(a*100))-(b*50)-(c*20)-(d*10)-(e*5)-(f*2)-(g*1)-(h*0.5))/0.25);
    j=(((n-(a*100))-(b*50)-(c*20)-(d*10)-(e*5)-(f*2)-(g*1)-(h*0.5)-(i*0.25))/0.10);
    k=(((n-(a*100))-(b*50)-(c*20)-(d*10)-(e*5)-(f*2)-(g*1)-(h*0.5)-(i*0.25)-(j*0.10))/0.05);
    l=(((n-(a*100))-(b*50)-(c*20)-(d*10)-(e*5)-(f*2)-(g*1)-(h*0.5)-(i*0.25)-(j*0.10)-(k*0.05))/0.01);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",l);

    return 0;
}
