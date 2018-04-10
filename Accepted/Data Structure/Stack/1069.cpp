#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

typedef long long int lli;

int main()
{
    string line;

    lli test;

    cin>>test;

    while(test--)
    {
        cin>>line;

        lli rg=0,lf=0;

        for(lli i=0; i<line.size(); i++)
        {
            if(line[i]=='<')
            {
                lf++;
            }

            if(line[i]=='>' && lf > 0)
            {
                rg++;
                lf--;
            }
        }

        cout<<rg<<endl;

    }

    return 0;
}
