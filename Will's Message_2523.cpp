#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    string in, out;
    int n, i, j, k;

    while(cin>>in)
    {
        out="";
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>j;
            out += in[j-1];
        }
        cout<<out<<endl;
    }

    return 0;
}


