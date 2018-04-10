#include <iostream>
using namespace std;

int main()
{
    int x,y,midx,midy,t,i;
    cin>>t;

    while(t!=0){
        cin>>midx>>midy;

        for(i=1;i<=t;i++){
            cin>>x>>y;

            if(x>midx && y>midy){
                cout<<"NE"<<endl;
            }
            if(x==midx || y==midy){
                cout<<"divisa"<<endl;
            }
            if(x<midx && y>midy){
                cout<<"NO"<<endl;
            }
            if(x>midx && y<midy){
                cout<<"SE"<<endl;
            }
            if(x<midx && y<midy){
                cout<<"SO"<<endl;
            }

        }
        cin>>t;
    }

    return 0;
}
