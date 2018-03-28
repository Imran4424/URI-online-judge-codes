#include <stdio.h>

int main()
{
    int a[5],sum=0,i;
    for(i=0;i<=4;i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%2==0){
            sum+=1;
        }
    }
    printf("%d valores pares\n",sum);

    return 0;
}
