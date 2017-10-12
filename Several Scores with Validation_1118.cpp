#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>

#define pf printf
#define sf scanf

using namespace std;

bool getinput()
{
    int n;
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    while(cin>>n)
    {
        if(n==2) return false;
        if(n==1) return true;
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
    }
}

int main()
{
    float num1, num2;
    int n;
    bool fl=true;

    while(true)
    {
        cin>>num1;

        if( num1>10 || num1<0)
        {
            cout<<"nota invalida"<<endl;
        }
        else
        {
            if(fl)
            {
                num2 = num1;
                fl = false;
            }
            else
            {
                pf("media = %.2f\n",(float)(num1+0.0+num2)/2);
                fl = true;

                if(!getinput())
                {
                    break;
                }
            }
        }
    }

    return 0;
}


