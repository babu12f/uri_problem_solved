#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>

#define pf printf
#define sf scanf
#define ll long long

int MAX(int x, int y){return x>y?x:y;}

using namespace std;

int GCM(int n, int m)
{
    int t;

    if(n==m) return n;

    if(n>m)swap(n,m);

    while(n != 0)
    {
        t = n;
        n = m%n;
        m = t;
    }
    return m;
}

int main()
{
    int test, f1, f2;

    cin>>test;

    while(test--)
    {
        cin>>f1>>f2;
        cout<<GCM(f1,f2)<<endl;
    }

    return 0;
}

