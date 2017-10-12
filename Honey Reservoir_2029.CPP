#include<bits/stdc++.h>

#define sf scanf
#define pf printf

using namespace std;

int main()
{
    float v, d, h, a, pi=3.14, r;

    while(sf("%f%f",&v,&d) != EOF)
    {
        r = d/2;
        a = pi*(r*r);
        h = v/(a);
        pf("ALTURA = %.2f\n",h);
        pf("AREA = %.2f\n",a);
    }

    return 0;
}

