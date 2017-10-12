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
    ll fac=1;;

    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    cout<<fac<<endl;


    return 0;
}
