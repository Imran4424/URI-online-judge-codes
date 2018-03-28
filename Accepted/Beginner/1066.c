#include <stdio.h>

int main()
{
    int a[5],sum=0,i,odd=0,pos=0,neg=0;
    for(i=0;i<=4;i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%2==0){
            sum+=1;
        }
        if(a[i]%2==1){
            odd+=1;
        }
        if(a[i]>0){
            pos+=1;
        }
        if(a[i]<0){
            neg+=1;
        }
    }
    printf("%d valor(es) par(es)\n",sum);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}
