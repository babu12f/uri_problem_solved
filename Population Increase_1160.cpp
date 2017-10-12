#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int test, pa, pb, i, j;
    ll pat, pbt;
    float ga, gb;
    bool f;

    cin>>test;

    while(test--)
    {
        cin>>pa>>pb>>ga>>gb;

        pat = pa;
        pbt = pb;
        f = true;

        for(i=1; i<=100; i++)
        {
            pat += (pat*ga)/100;
            pbt += (pbt*gb)/100;
            if(pat>pbt)
            {
                pf("%d anos.\n",i);
                f = false;
                break;
            }
        }
        if(f)pf("Mais de 1 seculo.\n");
    }

    return 0;
}

