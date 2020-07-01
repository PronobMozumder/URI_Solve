#include<stdio.h>
int main()
{
    int i;
    float a1[100];

    for(i=0; i<100; i++)
    {
        scanf("%f",&a1[i]);
    }

    for(i=0; i<100; i++)
    {
        if(a1[i]<=10)
        {
            printf("A[%d] = %.1f\n",i,a1[i]);
        }
    }
    return 0;
}
