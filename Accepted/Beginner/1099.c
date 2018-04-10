#include <stdio.h>

int main()
{
    int N,j;
    scanf("%d",&N);
    int X[N],Y[N],i,sum[N];
    for(j=0;j<N;j++){
        scanf("%d%d",&X[j],&Y[j]);
        sum[j]=0;
    }
    for(j=0;j<N;j++){
        if(X[j]>Y[j]){
            for(i=Y[j]+1;i<X[j];i++){
                if(i%2==1){
                    sum[j]+=i;
                }
                if(i%2==(-1)){
                    sum[j]+=i;
                }
            }
        }

        if(X[j]<Y[j]){
            for(i=X[j]+1;i<Y[j];i++){
                if(i%2==1){
                    sum[j]+=i;
                }
                if(i%2==(-1)){
                    sum[j]+=i;
                }
            }
        }
        printf("%d\n",sum[j]);

    }
    return 0;
}
