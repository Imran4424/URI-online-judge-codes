#include <stdio.h>
#include <math.h>

int main()
{
    double A,B,C,big,small;
    scanf("%lf%lf%lf",&A,&B,&C);

    if(A>B){
        if(A>C){
            if(B>C){

            }
            else{
                small=B;
                B=C;
                C=small;
            }
        }
        else{
            big=C;
            small=B;
            B=A;
            A=big;
            C=small;
        }
    }
    else{
        if(B>C){
            if(A>C){
                big=B;
                B=A;
                A=big;
            }
            else{
                big=B;
                small=A;
                B=C;
                A=big;
                C=small;
            }
        }
        else{
            big=C;
            small=A;
            A=big;
            C=small;
        }
    }

    if(A>0 && B>0 && C>0){
        if(A>=B+C){
            printf("NAO FORMA TRIANGULO\n");
        }
        else if(A<B+C){
            if(pow(A,2)==pow(B,2)+pow(C,2)){
                printf("TRIANGULO RETANGULO\n");
            }
            else{
                if(pow(A,2)>pow(B,2)+pow(C,2)){
                    printf("TRIANGULO OBTUSANGULO\n");
                }
                if(pow(A,2)<pow(B,2)+pow(C,2)){
                    printf("TRIANGULO ACUTANGULO\n");
                }
            }

            if(A>0){
                if(A==B && B==C){
                    printf("TRIANGULO EQUILATERO\n");
                }
                else if(A==B || B==C || A==C ){
                    printf("TRIANGULO ISOSCELES\n");
                }

            }

        }


    }
    return 0;
}
