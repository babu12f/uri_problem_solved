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
    int c=0;
    double n;

    for(int i=0; i<6; i++)
    {
        cin>>n;
        if(n>=0) c++;
    }
    cout<<c<<" valores positivos"<<endl;

    return 0;
}


