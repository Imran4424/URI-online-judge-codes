#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

typedef long long int lli;

int main()
{
    lli test;
    cin>>test;

    while(test--){
        double t_cost=0.0;
        lli available,num;
        cin>>available;
        num = available;
        string str[num];

        map <string,double>product;
        lli j = 0;
        while(available--){

            double  price;

            cin>>str[j]>>price;
            product[str[j]] = price;

            j++;
        }
        lli purcase;

        cin>>purcase;

        while(purcase--){
            string p_name;
            int p_num;
            cin>>p_name>>p_num;

            for(int i=0;i<num;i++){

                if(str[i] == p_name){
                    t_cost += (p_num*product[str[i]]);

                }
            }
        }

        cout<<"R$ "<<fixed<<setprecision(2)<<t_cost<<endl;
    }

    return 0;
}
