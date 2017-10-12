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

    for(int i=1; i<=10; i++)
    {
        pf("%d x %d = %d\n",i,n,(n*i));
    }

    return 0;
}

