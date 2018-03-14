#include <stdio.h>

int main()
{
    int N,h,m;
    scanf("%d",&N);

    m=N/60;
    N=N%60;
    h=m/60;
    m=m%60;

    printf("%d:%d:%d\n",h,m,N);
    return 0;
}
