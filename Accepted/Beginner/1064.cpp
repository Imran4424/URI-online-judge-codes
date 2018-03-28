#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a[6],sum = 0,avg;
    int i,positive=0;

    for(i=0;i<6;i++){
        cin>>a[i];


        if(a[i]>0){
            sum += a[i];
            positive++;
        }

    }
    avg = sum/positive;

    cout<<positive<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<avg<<endl;

    return 0;
}
