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

    cin>>n;

    for(int i=1; i<n*4; i++)
    {
        if(i%4==0){ pf("PUM\n");continue;}
        pf("%d ",i);
    }
    pf("PUM\n");

    return 0;
}
