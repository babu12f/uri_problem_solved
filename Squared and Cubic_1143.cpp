#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int n;
    long long cube;

    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cube = (i*i)*i;
        pf("%d %d %lld\n",i,(i*i),cube);
    }

    return 0;
}
