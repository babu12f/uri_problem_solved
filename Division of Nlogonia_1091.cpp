#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define pf printf
#define sf scanf

using namespace std;

int max(int a, int b){return (a > b)? a : b;}

int main()
{
    int test, ox, oy, x, y, i, j, l;


    while(cin>>test && test !=0)
    {
        cin>>ox>>oy;

        while(test--)
        {
            cin>>x>>y;

            x = x - ox;
            y = y - oy;

            if(x==0 || y==0)
            {
                cout<<"divisa"<<endl;
            }
            else if(x>0 && y>0)
            {
                cout<<"NE"<<endl;
            }
            else if(x<0 && y>0)
            {
                cout<<"NO"<<endl;
            }
            else if(x<0 && y<0)
            {
                cout<<"SO"<<endl;
            }
            else if(x>0 && y<0)
            {
                cout<<"SE"<<endl;
            }
        }
    }

    return 0;
}

