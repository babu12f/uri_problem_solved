#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int a, b, c, s;

    while(1)
    {
        cin>>a;
        if(a==0)break;
        cin>>b>>c;

        s = sqrt((((a*b)*100)/c));
        pf("%d\n",s);
    }

    return 0;
}


