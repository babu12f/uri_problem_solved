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
    int n, num, i;

    cin>>n>>num;

    for(i=1; i<=num; i++)
    {

        if(i%n==0)
        {
            cout<<i<<endl;
        }
        else
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
