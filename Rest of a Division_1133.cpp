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

    for(int i=x+1; i<y; i++)
    {
        if(i%5 == 2 || i%5 == 3) cout<<i<<endl;
    }

    return 0;
}



