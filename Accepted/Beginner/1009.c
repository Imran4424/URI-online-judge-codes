#include <stdio.h>

int main() {

    char str[10];
    float salary,sold,percentage,TOTAL;
    gets(str);
    scanf("%f%f",&salary,&sold);

    percentage=(15*sold)/100;
    TOTAL=salary+percentage;

    printf("TOTAL = R$ %.2f\n",TOTAL);

    return 0;
}
