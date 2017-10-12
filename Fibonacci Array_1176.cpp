#include<bits/stdc++.h>

#define ll long long
#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int test, n;
    ll fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<61; i++)
    {
        fib[i] = fib[i-2]+fib[i-1];
    }
    cin>>test;

    while(test--)
    {
        cin>>n;
        pf("Fib(%d) = %lld\n",n,fib[n]);
    }


    return 0;
}
