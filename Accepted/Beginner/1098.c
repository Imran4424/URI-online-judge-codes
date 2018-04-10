#include <stdio.h>

int main()
{
    float i,j;

    for(i=0.0;i<2.02;i=i+0.2){

        for(j=1.0;j<=3.0;j++){
            printf("I=%g J=%g\n",i,j+i);

        }

    }

}

