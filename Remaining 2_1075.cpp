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

    cout<<"2"<<endl;
    for(int i=1; (n*i)<10000; i++)
    {
        cout<<((n*i)+2)<<endl;
    }

    return 0;
}
