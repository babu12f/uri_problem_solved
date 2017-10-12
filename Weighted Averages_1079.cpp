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
    int test;
    float x, y, z;

    cin>>test;

    while(test--)
    {
        cin>>x>>y>>z;

        pf("%.1f\n",((x*2)+(y*3)+(z*5))/10);
    }

    return 0;
}


