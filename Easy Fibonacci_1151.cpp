#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int n;
    ll t1=0, t2=1, next;

    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            cout <<t1;
            continue;
        }
        if(i == 2)
        {
            cout <<" "<<t2;
            continue;
        }
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        cout<<" "<<next;
    }
    cout<<endl;


    return 0;
}
