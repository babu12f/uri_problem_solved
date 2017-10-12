#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

string base_cnvt(int n, int base)
{
    string dig = "0123456789abcdef";
    string number="";

    stack<int> s;

    while(n!=0)
    {
        s.push(n%base);
        n /= base;
    }

    while( !s.empty() ){ number += dig[ s.top() ]; s.pop(); }

    return number;
}

int base_revt(string n, int base)
{
    string dig = "0123456789abcdef";
    int l , c, number;

    l = n.length();
    c = l - 1;
    number = 0;

    for(int i=0; i<l; i++)
    {
        number += dig.find_first_of(n[i])*(pow(base,c));
        c--;
    }

    return number;
}

int main()
{
    int test, n, num, i;
    string s1, s2;

    cin>>test;
    getchar();
    for(i=1; i<=test; i++)
    {
        cin>>s1>>s2;

        if(s2== "bin")
        {
            num = base_revt(s1,2);

            cout<<"Case "<<i<<":"<<endl;
            cout<<num<<" dec"<<endl;
            cout<<base_cnvt(num,16)<<" hex"<<endl;
        }
        if(s2=="hex")
        {
            num = base_revt(s1,16);

            cout<<"Case "<<i<<":"<<endl;
            cout<<num<<" dec"<<endl;
            cout<<base_cnvt(num,2)<<" bin"<<endl;
        }
        if(s2=="dec")
        {
            istringstream (s1)>>num;

            cout<<"Case "<<i<<":"<<endl;
            cout<<base_cnvt(num, 16)<<" hex"<<endl;
            cout<<base_cnvt(num,2)<<" bin"<<endl;
        }
        cout<<endl;
    }

    return 0;
}



