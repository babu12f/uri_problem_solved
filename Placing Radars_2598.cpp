#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long

using namespace std;

int main()
{
    int test, av, ar, nr, rm;

    cin>>test;

    while(test--)
    {
        cin>>av>>ar;

        nr = av/ar;

        if(av%ar) nr++;

        cout<<nr<<endl;
    }

    return 0;
}

