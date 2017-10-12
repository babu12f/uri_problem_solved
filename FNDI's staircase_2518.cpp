#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int h, c, l, n;
    double area, side, side2;

    while(cin>>n)
    {
        cin>>h>>c>>l;

        side = sqrt((h*h)+(c*c));
        side /= 100.0;
        side2 = l/100.0;

        area = side * side2 * n;

        pf("%.4lf\n",area);
    }

    return 0;
}
