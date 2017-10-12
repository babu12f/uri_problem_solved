#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long
#define max 10001

using namespace std;

string base_cnvt(ll n, int base)
{
    string dig = "0123456789ABCDEF";
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

int main()
{
    ll n;

    cin>>n;

    cout<<base_cnvt(n,16)<<endl;

    return 0;
}
