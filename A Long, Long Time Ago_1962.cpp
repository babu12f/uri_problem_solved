#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long
#define max 10001

using namespace std;

int main()
{
    int test,t;

    cin>>test;

    while(test--)
    {
        cin>>t;

        if( (2015 - t)<=0 ) cout<<abs((2015 - t))+1<<" A.C."<<endl;
        else cout<<(2015 - t)<<" D.C."<<endl;
    }


    return 0;
}

