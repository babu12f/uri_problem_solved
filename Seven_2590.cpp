#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long

using namespace std;

int main()
{
    int test;
    ll n, p;

    cin>>test;

    while(test--)
    {
        cin>>n;

        p = pow(7,n);

        n = p%10;

        cout<<n<<endl;
    }

    return 0;
}
