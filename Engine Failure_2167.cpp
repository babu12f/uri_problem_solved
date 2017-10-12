#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int list[100], i, j, n, x=0;

    cin>>n;

    for(i=0; i<n; i++)cin>>list[i];
    for(i=1; i<n; i++)
    {
        if(list[i]<list[i-1])
        {
            x = i+1;
            break;
        }
    }
    cout<<x<<endl;


    return 0;
}

