#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    ll sum;
    int x, count, i;

    while(cin>>x && x!=0)
    {
        count=sum=0;

        for(i=x; count<5; i++)
        {
            if(i%2 == 0) { sum += i; count++; }
        }
        cout<<sum<<endl;
    }

    return 0;
}

