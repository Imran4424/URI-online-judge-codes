#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef long long int lli;

int main()
{
    lli test;
    cin>>test;

    getchar();
    getchar();

    while(test--){
        map <string,int> lists;
        string tree;
        lli total = 0;
        while(true){
            getline(cin,tree);

            if(tree.empty()){
                break;
            }

            if(lists.count(string(tree))==0){
                lists[tree] = 1;
            }
            else{
                lists[tree]++;
            }
            total++;
        }

        map <string,int>::iterator i;

        for(i=lists.begin();i!=lists.end();i++){
            cout<<i->first<<" "<<fixed<<setprecision(4)<<(i->second*100.0)/total<<endl;
        }

        if(test){
            cout<<endl;
            lists.clear();
            tree.clear();
        }
    }
    return 0;
}

