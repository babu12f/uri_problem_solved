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
    int test, sum, m, n, i;

    while(cin>>m>>n && m!=n)
    {
        if(m>n) cout<<"Decrescente"<<endl;
        else cout<<"Crescente"<<endl;
    }

    return 0;
}


