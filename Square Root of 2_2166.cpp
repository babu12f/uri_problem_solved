#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    double n, ans=0.0;

    cin>>n;

    while(n--)
    {
        ans += 2.0;
        ans = 1.0/ans;
    }
    ans += 1.0;

    pf("%.10lf\n",ans);

    return 0;
}


