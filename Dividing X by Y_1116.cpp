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
    int test,x,y;

    cin>>test;

    while(test--)
    {
        cin>>x>>y;

        if(x==0){cout<<"0.0"<<endl;}
        else if(y==0){cout<<"divisao impossivel"<<endl;}
        else
        {
            pf("%.1f\n",(x/(float)y));
        }
    }


    return 0;
}




