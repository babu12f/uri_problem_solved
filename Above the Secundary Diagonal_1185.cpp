#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int n=12;
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
    for(i=0; i<n-1; i++)
    {
        for(j=0;j<((n-1)-i); j++)rslt += data[i][j];
    }

    if(op=='S')pf("%.1f\n",rslt);
    else if(op=='M')pf("%.1f\n",rslt/66.0);

    return 0;
}
