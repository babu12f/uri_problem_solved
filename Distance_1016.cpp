#include<bits/stdc++.h>

#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int tm, spd;
    double cost;

    cin>>tm>>spd;

    cost = (double)(tm*spd)/12;

    pf("%.3f\n",cost);

    return 0;
}
