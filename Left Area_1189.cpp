#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int n=12, c;
    char op;
    double data[n][n], rslt=0.0, p;

    int i, j;

    cin>>op;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>data[i][j];
        }
    }
    c=1;
    for(i=1; i<n; i++)
    {
        if(i<(n/2))
            for(j=(n-c++); j<n; j++){rslt += data[i][j]; }
        else
        {
            for(j=(n-c--)+1; j<n; j++){rslt += data[i][j];}
        }
    }

    if(op=='S')pf("%.1f\n",rslt);
    else if(op=='M')pf("%.1f\n",rslt/30.0);

    return 0;
}
