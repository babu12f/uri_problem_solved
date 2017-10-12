#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    ll n, p, q;
    int a, i;

    cin>>a;

    if(a==0) cout<<"0.0"<<endl;
    else if(a==1) cout<<"1.0"<<endl;
    else
    {
        p = 0;
        q = 1;

        for(i=2; i<=a; i++)
        {
            n = p+q;
            p = q;
            q = n;
        }
        cout<<n<<".0"<<endl;
    }

    return 0;
}




