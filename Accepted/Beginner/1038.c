#include <stdio.h>

int main()
{
    float f[6],total;
    int X,Y;
    f[1]=4.00;
    f[2]=4.50;
    f[3]=5.00;
    f[4]=2.00;
    f[5]=1.50;

    scanf("%d%d",&X,&Y);
    total=f[X]*Y;

    printf("Total: R$ %.2f\n",total);

    return 0;
}
