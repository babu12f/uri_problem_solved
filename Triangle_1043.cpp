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
    double a, b, c, ar;

    cin>>a>>b>>c;

    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        ar = (a+b+c);
        pf("Perimetro = %.1lf\n",ar);
    }
    else
    {
        ar = ((a+b)/2)*c;
        pf("Area = %.1lf\n",ar);
    }

    return 0;
}
