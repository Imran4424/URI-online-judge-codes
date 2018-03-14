#include <stdio.h>

int main()
{
    float N1,N2,N3,N4,average;

    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);

    average=(N1*2+N2*3+N3*4+N4*1)/(2+3+4+1);

    printf("Media: %.1f\n",average);

    if(average>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(5.0<=average && average<=6.9){
        printf("Aluno em exame.\n");
        float N5,average2;
        scanf("%f",&N5);
        printf("Nota do exame: %.1f\n",N5);
        average2=(average+N5)/2;

        if(average2>=5){
            printf("Aluno aprovado.\n");
        }
        else if(average2<=5.0){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",average2);
    }
    else if(average<5.0 && average>=0.0){
        printf("Aluno reprovado.\n");
    }
    return 0;
}
