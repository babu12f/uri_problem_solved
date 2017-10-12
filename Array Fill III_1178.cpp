#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    cout<<fixed<<setprecision(4);
    double n;

    cin>>n;
    for(int i=0; i<100; i++)
    {
        pf("N[%d] = %.4f\n",i,n);
        n /= 2;
    }

    return 0;
}
