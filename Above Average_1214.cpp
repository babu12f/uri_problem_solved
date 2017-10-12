#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int test, i, j, k, n, sum, x, store[1000], cnt;
    double avg, per;

    cin>>test;

    while(test--)
    {
        cin>>n;
        sum = cnt = 0;
        for(i=0; i<n; i++)
        {
            cin>>store[i];
            sum += store[i];
        }
        avg = ( sum / ( n+0.0 ) );
        for(i=0; i<n; i++)
        {
            if(store[i]>avg) cnt++;
        }
        per = ( ( cnt * 100.0 ) / n );

        pf("%.3lf%%\n",per);
    }

    return 0;
}
