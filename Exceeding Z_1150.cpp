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
    int n, a, sum=0, count=0;

    cin>>a;
    while(cin>>n)
    {
        if(n>a)
        {
            for(int i=a; sum<=n; i++)
            {
                sum += i;
                count++;
            }
            cout<<count<<endl;
            break;
        }

    }

    return 0;
}
