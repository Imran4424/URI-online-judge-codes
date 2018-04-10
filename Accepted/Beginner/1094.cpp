#include <stdio.h>

int main()
{
    int n,i,total=0,torat=0,torabbit=0,tofrog=0;
    scanf("%d",&n);
    int num;
    char name;
    float ratp,rabbitp,frogp;


    for(i=1;i<=n;i++){
        scanf("%d %c",&num,&name);
        total+=num;
        if(name=='R'){
            torat+=num;
        }
        if(name=='C'){
            torabbit+=num;
        }
        if(name=='S'){
            tofrog+=num;
        }
    }
    ratp=(torat*100)/(float)total;
    rabbitp=(torabbit*100)/(float)total;
    frogp=(tofrog*100)/(float)total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",torabbit);
    printf("Total de ratos: %d\n",torat);
    printf("Total de sapos: %d\n",tofrog);
    printf("Percentual de coelhos: %.2f %c\n",rabbitp,37);
    printf("Percentual de ratos: %.2f %c\n",ratp,37);
    printf("Percentual de sapos: %.2f %c\n",frogp,37);
    return 0;
}

