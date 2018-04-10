#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

typedef long long int lli;

int main()
{
    string str;
    stack<char> stk;

    while(getline(cin,str))
    {
        for(lli i=0; i!=str.size(); i++)
        {
            stk.push(str[i]);


        }

        lli balance = 0;

        for(lli i=0; i<str.size(); i++)
        {
            if(stk.top() == '(' && balance<1)
            {
                balance = -5;
                break;
            }

            else
            {
                if(stk.top()==')')
                {
                    balance++;
                }

                if(stk.top()=='(')
                {
                    balance--;
                }
                stk.pop();
            }
        }

        if(balance == 0)
        {
            cout<<"correct"<<endl;
        }
        else
        {
            cout<<"incorrect"<<endl;
        }
    }

    return 0;
}
