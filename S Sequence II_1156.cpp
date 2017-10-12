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
    double sum=1;

    for(int i=3,j=2; i<=39; i+=2,j*=2)
    {
        sum += (i/(j+0.0));
    }
    pf("%.2lf\n",sum);

    return 0;
}
