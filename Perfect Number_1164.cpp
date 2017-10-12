#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int test, i, j, k, sum, n;

    cin>>test;

    while(test--)
    {
        cin>>n;
        sum = 1;
        for(i=2; i<=n/2;i++)
        {
            if(n%i==0) sum += i;
        }
        if(n == 1) cout<<n<<" nao eh perfeito"<<endl;
        else if( sum == n ) cout<<n<<" eh perfeito"<<endl;
        else cout<<n<<" nao eh perfeito"<<endl;
    }

    return 0;
}
