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

        stack<char>lf;
        stack<char>rg;

        for(lli i=0; i<line.size(); i++)
        {
            if(line[i]=='<')
            {
                lf.push(line[i]);
            }

            if(line[i]=='>' && !lf.empty())
            {
                rg.push(line[i]);
                lf.pop();
            }
        }

        cout<<rg.size()<<endl;

    }

    return 0;
}

