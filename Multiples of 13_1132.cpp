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
    long long sum=0;
    int x, y;

    cin>>x>>y;

    if(x>y) swap(x,y);

    for(int i=x; i<=y; i++)
    {
        if(i%13 != 0) sum += i;
    }
    cout<<sum<<endl;

    return 0;
}


