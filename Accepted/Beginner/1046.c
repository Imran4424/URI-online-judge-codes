#include <stdio.h>
#include <math.h>

int main()
{
    int start,end,hour;
    scanf("%d%d",&start,&end);

    if(0<=start<=23 && 0<=end<=23){
        if(end==0 && ((13<=start && start<=23) || (0<=start && start<=12))){
            hour=24-start;
        }
        else if(start==end){
            hour=24;
        }
        else if(0<=start && start<=12 && 0<=end && end<=12){
            hour=end-start;
        }
        else if(0<=start && start<=12 && 13<=end && end<=23){
            hour=end-start;
        }
        else if(13<=start && start<=23 && 13<=end && end<=23){
            hour=end-start;
        }
        else if(13<=start && start<=23 && 0<=end && end<=12){
            hour=(24-start)+(end-0);
        }


    }
    printf("O JOGO DUROU %d HORA(S)\n",hour);
    return 0;
}
