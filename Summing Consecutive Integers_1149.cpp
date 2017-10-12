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
    int n, a, sum=0;

    cin>>a;
    while(cin>>n)
    {
        if(n>0)
        {
            for(int i=1; i<=n; i++)
            {
                sum += a++;
            }
            cout<<sum<<endl;
            break;
        }

    }

    return 0;
}

