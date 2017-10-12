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

    for(int i=2; i<=100; i++)
    {
        sum += (1/(i+0.0));
    }
    pf("%.2lf\n",sum);

    return 0;
}
