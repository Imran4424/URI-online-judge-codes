#include <stdio.h>

int main()
{
    int X,i,j=0;
    scanf("%d",&X);

    for(i=X;j<6;i++){
        if(i%2==1){
            printf("%d\n",i);
            j+=1;
        }
    }

    return 0;
}
