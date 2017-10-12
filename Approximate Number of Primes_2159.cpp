#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    double n;

    cin>>n;

    pf("%.1lf ",(n/(log(n))));
    pf("%.1lf\n",(n/(log(n)))*1.25506);

    return 0;
}
