#include <stdio.h>


int main()
{
    float salary,increment;
    int percentage;
    scanf("%f",&salary);

    if(salary>=0 && salary<=400){
        increment=(15*salary)/100;
        salary=salary+increment;
        percentage=15;
    }
    else if(salary>=400.01 && salary<=800){
        increment=(12*salary)/100;
        salary=salary+increment;
        percentage=12;
    }
    else if(salary>=800.01 && salary<=1200){
        increment=(10*salary)/100;
        salary=salary+increment;
        percentage=10;
    }
    else if(salary>=1200.01 && salary<=2000){
        increment=(7*salary)/100;
        salary=salary+increment;
        percentage=7;
    }
    else if(salary>2000){
        increment=(4*salary)/100;
        salary=salary+increment;
        percentage=4;
    }

    printf("Novo salario: %.2f\n",salary);
    printf("Reajuste ganho: %.2f\n",increment);
    printf("Em percentual: %d %c\n",percentage,37);
    return 0;
}
