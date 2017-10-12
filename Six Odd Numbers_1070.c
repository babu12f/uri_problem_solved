#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>

#define pf printf
#define sf scanf

using namespace std;

void printOddNumber(int n)
{
    for(int i=n; i<=i*2; i+=2)
    {
        cout<<i<<endl;
    }
}

int main()
{
    int x;

    cin>>x;

    if(x%2==0)printOddNumber(x+1);
    else printOddNumber(x);

    return 0;
}



