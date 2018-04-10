#include <stdio.h>

int main()
{
    int i,j,k=2;

    for(i=1;i<=9;i=i+2){

        for(j=k+5;j>=k+3;j--){
            printf("I=%d J=%d\n",i,j);

        }
        k=j;
    }
    return 0;

}

