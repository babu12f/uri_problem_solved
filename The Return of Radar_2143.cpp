#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int t, n, i;

    while(cin>>t && t>0)
    {
        for(i=0; i<t; i++)
        {
            cin>>n;
            if(n%2!=0)cout<<(n*2)-1<<endl;
            else cout<<(n*2)-2<<endl;
        }
    }

    return 0;
}
