#include <stdio.h>

int main()
{
    int a,b,s,MaiorAB;
    scanf("%d%d%d",&a,&b,&s);

    MaiorAB=(a+b+abs(a-b))/2;

    if(MaiorAB>s){
        printf("%d eh o maior\n",MaiorAB);

    }
    else{
        printf("%d eh o maior\n",s);

    }
    return 0;
}
