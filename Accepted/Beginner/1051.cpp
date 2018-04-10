#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double salary;
    cin>>salary;

    if(0.00<=salary && salary<=2000.00){
        cout<<"Isento"<<endl;
    }
    else{
        salary = salary-2000;

        double tax,part3=0,part2=0,part1=0,tax1=0,tax2=0,tax3=0;

        if(salary>2500){
            part3 = salary-2500;
            part2 = 1500;
            part1 = 1000;
        }
        if(salary>1000 && salary<=2500){
            part2 = salary - 1000;
            part1 = 1000;
        }

        if(salary<=1000){
            part1 = salary;
        }



        //cout<<salary<<" "<<part1<<" "<<part2<<" "<<part3<<endl;

        tax1=(part1*8)/100;
        tax2=(part2*18)/100;
        tax3=(part3*28)/100;

        tax = tax1+tax2+tax3;

        cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;

    }



    return 0;
}
