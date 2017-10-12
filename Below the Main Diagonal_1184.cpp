#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    char op;
    double rslt=0.0, p;

    int i, j;

    cin>>op;

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>p;
            if(i>j)rslt += p;
        }
    }
    if(op=='S')pf("%.1f\n",rslt);
    else if(op=='M')pf("%.1f\n",rslt/66.0);

    return 0;
}


