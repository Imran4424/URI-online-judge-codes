#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int X[N],i,in=0,out=0;

    for(i=0;i<N;i++){
        scanf("%d",&X[i]);
    }
    for(i=0;i<N;i++){
        if(X[i]>=10 && X[i]<=20){
            in+=1;
        }
        else{
            out+=1;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}
