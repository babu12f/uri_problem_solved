#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define MAX 1000

using namespace std;

int main()
{
    int s, va, vb;

    while(cin>>s>>va>>vb)
    {
        if(va<=vb)
        {
            cout<<"impossivel"<<endl;
        }
        else
        {
            pf("%.2f\n",(s/(va-vb+0.0)));
        }
    }


    return 0;
}

