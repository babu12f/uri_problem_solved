#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    double n;
    string s;
    int test;

    cin>>test;

    while(test--)
    {
        cin>>s;
        n = s.length()*0.01;
        pf("%.2lf\n",n);
    }

    return 0;
}

