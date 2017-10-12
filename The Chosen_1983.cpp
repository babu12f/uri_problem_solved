#include<bits/stdc++.h>

#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int s, r;
    float n, mx, rool;

    cin>>s;
    cin>>r>>n; s--;
    mx = r;
    rool = n;
    while(s--)
    {
        cin>>r>>n;
        if(n>rool){mx = r; rool = n;}
    }
    if(rool>=8)
    {
        cout<<mx<<endl;
    }
    else
    {
        cout<<"Minimum note not reached"<<endl;
    }

    return 0;
}
