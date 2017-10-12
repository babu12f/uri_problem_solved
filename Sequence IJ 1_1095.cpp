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
    for(int i=1,j=60;j>=0;i+=3,j-=5)
    {
        pf("I=%d J=%d\n",i,j);
    }

    return 0;
}

