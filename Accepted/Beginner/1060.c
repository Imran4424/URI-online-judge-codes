#include <stdio.h>


int main()
{
    int i,a[6],sum=0;
    for(i=0;i<=5;i=i+1){
        scanf("%d",&a[i]);
    }

    for(i=0;i<=5;i=i+1){
        if(a[i]>=0){
            sum+=1;
        }
    }
    printf("%d valores positivos\n",sum);

    return 0;
}
