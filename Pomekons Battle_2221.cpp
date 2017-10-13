#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int test, bonus, a1, d1, l1, a2, d2, l2, i, j, k;
    float val1, val2;

    cin>>test;

    while(test--)
    {
        cin>>bonus>>a1>>d1>>l1>>a2>>d2>>l2;

        val1 = (float) (a1+d1)/2.0;
        if(l1%2==0) val1 += bonus;

        val2 = (float) (a2+d2)/2.0;
        if(l2%2==0) val2 += bonus;

        if(val1>val2)cout<<"Dabriel";
        else if(val1<val2) cout<<"Guarte";
        else cout<<"Empate";
        cout<<endl;
    }


    return 0;
}
