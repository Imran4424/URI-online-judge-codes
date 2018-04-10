#include <stdio.h>

int main()
{
    int i,a[100],big=0,temp=0;

    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++){
        if(a[i]>big && a[i]>0){
            big=a[i];
            temp=i+1;
        }
    }
    printf("%d\n",big);
    printf("%d\n",temp);

}
