#include <stdio.h>

int main()
{
    int X,Y,i,sum=0;
    scanf("%d%d",&X,&Y);

    while(X!=0 && Y!=0){
        if(X>Y){
            for(i=Y;i<=X;i++){
                printf("%d ",i);
                sum+=i;

            }
        }

        if(X<Y){
            for(i=X;i<=Y;i++){
                printf("%d ",i);
                sum+=i;

            }
        }
        printf("Sum=%d\n",sum);
        scanf("%d%d",&X,&Y);
        sum=0;
    }

    return 0;
}

