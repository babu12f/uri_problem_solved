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
    int test, sum, m, n, i;

    while(cin>>m>>n && m>0 && n>0)
    {
        sum=0;

        if(m>n)swap(m,n);

        for(i=m; i<=n; i++)
        {
            sum += i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<endl;
    }

    return 0;
}

