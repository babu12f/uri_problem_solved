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
    int n=-999999, index, x;

    for(int i=1; i<=100; i++)
    {
        cin>>x;

        if(x>n)
        {
            n = x;
            index = i;
        }
    }
    cout<<n<<endl;
    cout<<index<<endl;


    return 0;
}


