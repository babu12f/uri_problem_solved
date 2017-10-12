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
    int test, in=0, out=0, n;

    cin>>test;

    while(test--)
    {
        cin>>n;
        if(n>=10 && n<=20) in++;
        else out++;
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;

    return 0;
}
