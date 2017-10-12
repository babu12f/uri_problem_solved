#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << (x) << endl

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int s, t, f, ti;

    cin>>s>>t>>f;

    if(s==0) s=24;

    ti = (s+t)+f;
    ti = (ti>=24)?ti-24:ti;

    cout<<ti<<endl;

    return 0;
}


