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
    for(int i=1,j=7;i<=9; i+=2,j+=2)
    {
        pf("I=%d J=%d\n",i,j);
        pf("I=%d J=%d\n",i,j-1);
        pf("I=%d J=%d\n",i,j-2);
    }

    return 0;
}

