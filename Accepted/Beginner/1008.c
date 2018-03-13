#include <stdio.h>

int main() {

    int NUMBER,Hours;
    float money;
    scanf("%d%d",&NUMBER,&Hours);
    scanf("%f",&money);


    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",Hours*money);

    return 0;
}
