#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int l, v, s,c, i;

    while(cin>>l)
    {
        s = 0;
        for(i=1; i<=l; i++)
        {
            cin>>v;
            if(v<10)
            {
                c=1;
                if(c>s)s=c;
            }
            else if(v>=10 && v<20)
            {
                c=2;
                if(c>s)s=c;
            }
            else if(v>=20)
            {
                c=3;
                if(c>s)s=c;
            }
        }
        pf("%d\n",s);
    }

    return 0;
}




