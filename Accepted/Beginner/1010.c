#include <stdio.h>

int main() {

    int p1,p2,n1,n2;
    float pri1,pri2,total;
    scanf("%d %d %f",&p1,&n1,&pri1);
    scanf("%d %d %f",&p2,&n2,&pri2);

    total=(n1*pri1)+(n2*pri2);

    printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;
}
