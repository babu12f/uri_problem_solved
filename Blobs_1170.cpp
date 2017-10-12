#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int test, i, j, k, day;
    float n;

    cin>>test;

    while(test--)
    {
        cin>>n;
        day = 0;
        while(n>1)
        {
            day++;
            n /= 2;
        }
        cout<<day<<" dias"<<endl;
    }

    return 0;
}
