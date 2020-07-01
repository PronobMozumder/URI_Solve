#include<stdio.h>
int main()
{
    char ch;
    double m[12][12], sum=0.0, avg=0.0;
    int row,e=11,x=6, col;

    scanf("%c", &ch);

    for(row=0; row<12; ++row)
    {
        for(col=0; col<12; ++col)
        {
            scanf("%lf", &m[row][col]);
        }
    }


    for(row=0; row<6; row++)
    {
        for(col=0; col<12;col++)
        {
            if(col>e)
            {
                sum += m[row][col];
            }

        }
        e--;
    }
    for(row=6; row<12; row++)
    {
        for(col=0; col<12;col++)
        {
            if(col>x)
            {
                sum += m[row][col];
            }
        }
        x++;
    }
    if(ch == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else if(ch == 'M')
    {
        avg=sum/30.0;
        printf("%.1lf\n",avg);
    }
    return 0;
}
