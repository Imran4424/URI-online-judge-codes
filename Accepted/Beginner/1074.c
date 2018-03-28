#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int X[N],i;
    for(i=0;i<N;i++){
        scanf("%d",&X[i]);
    }
    for(i=0;i<N;i++){
        if(X[i]%2==0 && X[i]>0){
            printf("EVEN POSITIVE\n");
        }
        if(X[i]%2==0 && X[i]<0){
            printf("EVEN NEGATIVE\n");
        }
        if(X[i]>0 && (X[i]%2==1 || X[i]%2==(-1))){
            printf("ODD POSITIVE\n");
        }
        if(X[i]<0 && (X[i]%2==1 || X[i]%2==(-1))){
            printf("ODD NEGATIVE\n");
        }
        if(X[i]==0){
            printf("NULL\n");
        }
    }

    return 0;
}
