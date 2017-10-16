#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int x;

    cin>>x;

    if(x%2==0)x+=2;
    else x++;

    cout<<x<<endl;

    return 0;
}

