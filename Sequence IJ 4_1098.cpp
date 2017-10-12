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
    float i, j;
    for(i=0; i<=2.1; i+=0.2)
    {
        cout<<"I="<<i<<" J="<<i+1<<endl;
        cout<<"I="<<i<<" J="<<i+2<<endl;
        cout<<"I="<<i<<" J="<<i+3<<endl;
    }


    return 0;
}

