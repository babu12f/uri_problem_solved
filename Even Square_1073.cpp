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
    int n;

    cin>>n;

    for(int i=2; i<=n; i+=2)
    {
        cout<<i<<"^"<<2<<" = "<<(i*i)<<endl;
    }

    return 0;
}

