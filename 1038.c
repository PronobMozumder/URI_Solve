#include<stdio.h>
int main()
{
    int x;
    float s,y;

    scanf("%d %f",&x,&y);

    switch (x)
    {
    case 1:
        {
            s=4.00 * y;
             printf("Total: R$ %0.2f\n",s);
            break;
        }
    case 2:
        {
            s=4.50 * y;
             printf("Total: R$ %0.2f\n",s);
            break;
        }
    case 3:
        {
            s=5.00 * y;
             printf("Total: R$ %0.2f\n",s);
            break;
        }
    case 4:
        {
            s=2.00 * y;
             printf("Total: R$ %0.2f\n",s);
            break;
        }
    case 5:
        {
            s=1.50 * y;
             printf("Total: R$ %0.2f\n",s);
            break;
        }


    return 0;
    }
}
