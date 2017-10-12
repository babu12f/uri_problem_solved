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
    for(int i=1;i<=9; i+=2)
    {
        pf("I=%d J=7\n",i);
        pf("I=%d J=6\n",i);
        pf("I=%d J=5\n",i);
    }

    return 0;
}

