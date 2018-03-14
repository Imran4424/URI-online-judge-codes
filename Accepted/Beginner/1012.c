#include <stdio.h>
#include <math.h>

int main()
{
    double A,B,C,pi = 3.14159;
    scanf("%lf%lf%lf",&A,&B,&C);

    printf("TRIANGULO: %.3lf\n",0.5*A*C);
    printf("CIRCULO: %.3lf\n",pi*pow(C,2));
    printf("TRAPEZIO: %.3lf\n",0.5*(A+B)*C);
    printf("QUADRADO: %.3lf\n",pow(B,2));
    printf("RETANGULO: %.3lf\n",A*B);

    return 0;
}
