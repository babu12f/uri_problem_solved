#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int test, n[100];
    bool f;

    cin>>test;

    for(int i=0; i<test; i++)
    {
        cin>>n[i];
    }
    f = true;
    if(test>=3)
    {
        for(int i=1; i<test-1; i++)
        {
            if( (n[i-1]>n[i] && n[i]<n[i+1]) || (n[i-1]<n[i] && n[i]>n[i+1])  )
            {
            }
            else
            {
                f = false;
                break;
            }
        }
    }
    else
    {
        if(n[1]==n[0]) f = false;
    }
    if(f) cout<<"1"<<endl;
    else cout<<"0"<<endl;

    return 0;
}
