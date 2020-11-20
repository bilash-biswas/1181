#include<stdio.h>
int main()
{
    double x[12][12],sum=0;
    int i,j,a;
    char ch;
    scanf("%d %c",&a,&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&x[i][j]);
        }
    }
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            if(i==a)
            {
                sum=sum+x[i][j];
            }
        }
    }
    if(ch=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(ch=='M')
    {
        printf("%.1lf\n",sum/12);
    }

    return 0;
}

