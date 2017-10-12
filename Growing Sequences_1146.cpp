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

    while(cin>>n && n!=0)
    {
        for(int i=1; i<=n; i++)
        {
            if(i==n) cout<<i<<endl;
            else cout<<i<<" ";
        }
    }

    return 0;
}

