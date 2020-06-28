#include<stdio.h>
int main()
{
    int w,w1,x,y,z,x1,y1,z1,h,m,s,d;

    printf("Dia ");
    scanf("%d%d%d%d",&w,&x,&y,&z);

    printf("Dia ");
    scanf("%d%d%d%d",&w1,&x1,&y1,&z1);


    if(w1>w && x>x1)
    {
        d=(w1-w)-1;
    }
    else if(w==w1)
    {
        d=0;
    }


    if(x>x1)
    {
        h=(24-x)+x1;
    }
    else
    {
        h=x1-x;
    }

    if(y1>y)
    {
        m=(y1-y);
    }
    else
    {
        m=y-y1;
    }
    if(z>z1)
    {
        s=z-z1;
    }
    else
    {
        s=z1-z;
    }


    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);

    return 0;

}
