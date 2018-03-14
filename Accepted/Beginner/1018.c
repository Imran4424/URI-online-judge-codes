#include <stdio.h>

int main()
{
    int N,a,b,c,d,e,f,g;
    scanf("%d",&N);
    printf("%d\n",N);
    if(0<N<1000000){
        a=N/100;
        N=N%100;
        b=N/50;
        N=N%50;
        c=N/20;
        N=N%20;
        d=N/10;
        N=N%10;
        e=N/5;
        N=N%5;
        f=N/2;
        g=N%2;
    }
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",b);
    printf("%d nota(s) de R$ 20,00\n",c);
    printf("%d nota(s) de R$ 10,00\n",d);
    printf("%d nota(s) de R$ 5,00\n",e);
    printf("%d nota(s) de R$ 2,00\n",f);
    printf("%d nota(s) de R$ 1,00\n",g);

    return 0;
}
