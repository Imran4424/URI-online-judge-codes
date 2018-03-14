#include <iostream>
using namespace std;

int main()
{
    double n;
    cin>>n;

    int taka=0,poisha=0,m,hundred=0,fifty=0,twenty=0,ten=0,five=0,two=0,one=0;
    int fifty_cent=0,twentyfive_cent=0,ten_cent=0,five_cent=0,one_cent=0;

    n=n*100;
    m= (int)n;

    taka = m/100;
    poisha = m%100;

    hundred = taka/100;
    taka = taka %100;

    if(taka != 0){
        fifty = taka/50;
        taka = taka%50;
    }

    if(taka != 0){
        twenty = taka/20;
        taka = taka%20;
    }

    if(taka != 0){
        ten = taka/10;
        taka = taka%10;
    }

    if(taka != 0){
        five = taka/5;
        taka = taka%5;
    }

    if(taka != 0){
        two = taka/2;
        taka = taka%2;
    }
    one = taka;


    if(poisha != 0){
        fifty_cent = poisha/50;
        poisha = poisha%50;
    }

    if(poisha != 0){
        twentyfive_cent = poisha/25;
        poisha = poisha%25;
    }

    if(poisha != 0){
        ten_cent = poisha/10;
        poisha = poisha%10;
    }

    if(poisha != 0){
        five_cent = poisha/5;
        poisha = poisha%5;
    }
    one_cent = poisha;

    cout<<"NOTAS:"<<endl;
    cout<<hundred<<" nota(s) de R$ 100.00"<<endl;
    cout<<fifty<<" nota(s) de R$ 50.00"<<endl;
    cout<<twenty<<" nota(s) de R$ 20.00"<<endl;
    cout<<ten<<" nota(s) de R$ 10.00"<<endl;
    cout<<five<<" nota(s) de R$ 5.00"<<endl;
    cout<<two<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;
    cout<<one<<" moeda(s) de R$ 1.00"<<endl;
    cout<<fifty_cent<<" moeda(s) de R$ 0.50"<<endl;
    cout<<twentyfive_cent<<" moeda(s) de R$ 0.25"<<endl;
    cout<<ten_cent<<" moeda(s) de R$ 0.10"<<endl;
    cout<<five_cent<<" moeda(s) de R$ 0.05"<<endl;
    cout<<one_cent<<" moeda(s) de R$ 0.01"<<endl;



    return 0;
}
