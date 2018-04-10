#include <stdio.h>

int main()
{
    int N,i;
    scanf("%d",&N);
    float a[N],b[N],c[N],ave[N];
    for(i=0;i<N;i++){
        scanf("%f%f%f",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<N;i++){
        ave[N]=(a[i]*2+b[i]*3+c[i]*5)/(2+3+5);

        printf("%.1f\n",ave[N]);
    }
    return 0;
}

