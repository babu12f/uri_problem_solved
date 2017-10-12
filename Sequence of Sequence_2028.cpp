#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long
#define max 10001

using namespace std;

int main()
{
    int i=1, n, j, k;

    while(sf("%d",&n)!=EOF)
    {
        j = (n*(n+1))/2;
        if(j>0) pf("Caso %d: %d numeros\n",i++,j+1);
        else pf("Caso %d: %d numero\n",i++, j+1);
        pf("0");
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=j; k++)
            pf(" %d",j);
        }
        pf("\n\n");
    }

    return 0;
}

