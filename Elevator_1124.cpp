#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int w, h, r1, r2, totlaWidth, totalHeight;
    double cp, cd, pd;

    while(cin>>w>>h>>r1>>r2 && (w>0 && h>0 && r1>0 && r2>0))
    {
        totlaWidth = (r1*2)+(r2*2);
        totalHeight = (r1>r2)?(r1*2):(r2*2);

        if( (w>=totalHeight && h>=totalHeight) )
        {
            cout<<"S"<<endl;

        }
        else
        {
            cout<<"N"<<endl;
        }

    }

    return 0;
}


