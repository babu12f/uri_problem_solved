#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int x1, y1, x2, y2;

    while(cin>>x1>>y1>>x2>>y2 && x1>0 && y1>0 && x2>0 && y2>0)
    {
        if(abs(x1-x2)==0 && abs(y1-y2)==0)
        {
            cout<<"0"<<endl;
        }
        else if(x1==x2 || y1==y2)
        {
            cout<<"1"<<endl;
        }
        else if( abs(x1-x2)-abs(y1-y2)==0 )
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }

    }

    return 0;
}
