#include <stdio.h>
#include <math.h>

int main()
{
    double A,B,C,notation,R1,R2;
    scanf("%lf%lf%lf",&A,&B,&C);

    notation=pow(B,2)-4*A*C;

    if(notation>=0 && A>0){
        R1=(-B+sqrt(notation))/(2*A);
        R2=(-B-sqrt(notation))/(2*A);

        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
