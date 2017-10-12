#include<bits/stdc++.h>

#define sf scanf
#define pf printf

using namespace std;

int main()
{
    double x1, y1, x2, y2, dis;

    cin>>x1>>y1>>x2>>y2;

    dis = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    pf("%.4f\n",dis);

    return 0;
}
