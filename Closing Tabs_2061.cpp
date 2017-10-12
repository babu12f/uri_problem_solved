#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int n, m, i;
    string s;

    cin>>n>>m;

    for(i=1; i<=m; i++)
    {
        cin>>s;
        if(s=="fechou")
        {
            n++;
        }
        else
        {
            n--;
        }
    }
    cout<<n<<endl;

    return 0;
}

