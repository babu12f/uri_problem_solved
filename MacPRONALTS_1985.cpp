#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long
#define max 10001

using namespace std;

int main()
{
    int p, pn, q;
    float sum=0;

    cin>>p;

    for(int i=1; i<=p; i++)
    {
        cin>>pn>>q;

        if(pn==1001){ sum += q*1.50; }
        else if(pn==1001){ sum += q*1.50; }
        else if(pn==1002){ sum += q*2.50; }
        else if(pn==1003){ sum += q*3.50; }
        else if(pn==1004){ sum += q*4.50; }
        else if(pn==1005){ sum += q*5.50; }
    }
    pf("%.2f\n",sum);

    return 0;
}
