#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>

#define pf printf
#define sf scanf

using namespace std;

void printMsg(int x)
{
    if(x==0)
    {
        cout<<"NULL"<<endl;
        return;
    }
    if(x%2==0)
    {
        cout<<"EVEN ";
    }
    else
    {
        cout<<"ODD ";
    }

    if(x<0)
    {
        cout<<"NEGATIVE";
    }
    else
    {
        cout<<"POSITIVE";
    }
    cout<<endl;
}

int main()
{
    int n,x;

    cin>>n;

    while(n--)
    {
        cin>>x;
        printMsg(x);
    }

    return 0;
}

