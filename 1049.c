#include<stdio.h>
int main()
{
    char x[100], y[100], z[100];
    char ch1[100]="vertebrado", ch2[100]="invertebrado";
    char ch3[100]="ave", ch4[100]="mamifero", ch5[100]="inseto", ch6[100]="anelideo";
    char ch7[100]="carnivoro", ch8[100]="onivoro", ch9[100]="herbivoro", ch10[100]="hematofago";

   gets(x);
   gets(y);
   gets(z);

    if(0==strcmp(x,ch1) && 0==strcmp(y,ch3) && 0==strcmp(z,ch7))
    {
        printf("aguia\n");
    }
    else if(0==strcmp(x,ch1) && 0==strcmp(y,ch3) && 0==strcmp(z,ch8))
    {
        printf("pomba\n");
    }
    else if(0==strcmp(x,ch1) && 0==strcmp(y,ch4) && 0==strcmp(z,ch8))
    {
        printf("homem\n");
    }
    else if(0==strcmp(x,ch1) && 0==strcmp(y,ch4) && 0==strcmp(z,ch9))
    {
        printf("vaca\n");
    }


    else if(0==strcmp(x,ch2) && 0==strcmp(y,ch5) && 0==strcmp(z,ch10))
    {
        printf("pulga\n");
    }
    else if(0==strcmp(x,ch2) && 0==strcmp(y,ch5) && 0==strcmp(z,ch9))
    {
        printf("lagarta\n");
    }
    else if(0==strcmp(x,ch2) && 0==strcmp(y,ch6) && 0==strcmp(z,ch10))
    {
        printf("sanguessuga\n");
    }
    else if(0==strcmp(x,ch2) && 0==strcmp(y,ch6) && 0==strcmp(z,ch8))
    {
        printf("minhoca\n");
    }

    return 0;
}
