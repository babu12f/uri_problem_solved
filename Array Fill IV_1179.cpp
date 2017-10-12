#include<bits/stdc++.h>

#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int odd[5],even[5], i, j, k, l, x, m, n, ec=0, oc=0;

    for(i=0; i<15; i++)
    {
        cin>>n;

        if(n%2==0)
        {
            even[ec++]=n;
        }
        else
        {
            odd[oc++]=n;
        }
        if(ec==5)
        {
            for(j=0; j<5; j++)
            {
                pf("par[%d] = %d\n",j,even[j]);
            }
            ec=0;
        }
        if(oc==5)
        {
            for(j=0; j<5; j++)
            {
                pf("impar[%d] = %d\n",j,odd[j]);
            }
            oc=0;
        }
    }
    for(j=0; j<oc; j++)
    {
        pf("impar[%d] = %d\n",j,odd[j]);
    }
    for(j=0; j<ec; j++)
    {
        pf("par[%d] = %d\n",j,even[j]);
    }

    return 0;
}
