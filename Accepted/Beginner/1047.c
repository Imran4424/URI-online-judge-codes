#include <stdio.h>


int main()
{
    int start,end,hour,sm,em,minute;
    scanf("%d%d",&start,&sm);
    scanf("%d%d",&end,&em);

    if(0<=start<=23 && 0<=end<=23){
        if(end==0 && ((13<=start && start<=23) || (0<=start && start<=12))){
            hour=24-start;
        }
        else if(start==end){
            hour=24;
        }
        else if(0<=start && start<=12 && 0<=end && end<=12 && start<end){
            hour=end-start;
        }
        else if(0<=start && start<=12 && 0<=end && end<=12 && start>end){
            hour=end-start+24;
        }

        else if(0<=start && start<=12 && 13<=end && end<=23){
            hour=end-start;
        }
        else if(13<=start && start<=23 && 13<=end && end<=23 && start<end){
            hour=end-start;
        }
        else if(13<=start && start<=23 && 13<=end && end<=23 && start>end){
            hour=end-start+24;
        }
        else if(13<=start && start<=23 && 0<=end && end<=12){
            hour=(24-start)+(end-0);
        }


    }

    minute=em-sm;
    if(minute<0){
        hour=hour-1;
        minute=minute+60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);
    return 0;
}
