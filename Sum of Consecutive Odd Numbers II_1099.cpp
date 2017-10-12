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
    int test, sum, x, y, i;

    cin>>test;

    while(test--)
    {
        sum = 0;

        cin>>x>>y;

        if(x>y)swap(x,y);

        for(i=x+1; i<y; i++)
        {
            if(i%2 != 0) sum+=i;
        }
        cout<<sum<<endl;
    }

    return 0;
}

