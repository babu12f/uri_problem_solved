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
    float f,s;
    bool fl=true;

    while(true)
    {
        cin>>f;

        if(f>10 || f<0)
        {
            cout<<"nota invalida"<<endl;
        }
        else if(fl)
        {
            s = f;
            fl = false;
        }
        else
        {
            pf("media = %.2f\n",(f+s)/2);
            break;
        }
    }


    return 0;
}
