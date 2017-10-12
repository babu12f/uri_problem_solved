#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long

using namespace std;

int main()
{
    int test, t, bo, l, r, f, ba, i, j, k;

    cin>>test;

    while(test--)
    {
        cin>>t>>l>>ba>>r>>f>>bo;

        if( (t+bo)==7 && (l+r)==7  && (f+ba)==7)
        {
            cout<<"SIM"<<endl;
        }
        else
        {
            cout<<"NAO"<<endl;
        }
    }

    return 0;
}
