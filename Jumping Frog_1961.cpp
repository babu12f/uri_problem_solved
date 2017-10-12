#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long
#define max 10001

using namespace std;

int main()
{
    int x, p, n, x1;
    bool flag=true;

    cin>>p>>n>>x;

    for(int i=0; i<n-1; i++)
    {
        cin>>x1;
        if(abs(x - x1)>p){cout<<"GAME OVER"<<endl; flag=false; break;}
        x = x1;
    }
    if(flag)cout<<"YOU WIN"<<endl;

    return 0;
}
