#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long
#define max 10001

using namespace std;

int main()
{
    int in[max], r, c, i;
    ll sum;
    bool s;

    while(cin>>r>>c && (r>0 || c>0))
    {
        sum = 0;
        for(i=0; i<c; i++)
        {
            cin>>in[i];
            if(i)
            {
                if(in[i-1]>in[i])
                {
                    sum += in[i-1]-in[i];
                }
            }
            else
            {
                sum += r - in[i];
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}


