#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

long long fac(int n)
{
    long long fib=1;
    for(int i=1; i<=n; i++)
    {
        fib *= i;
    }

    return fib;
}

int main()
{
    long long fib1, fib2, sum;

    while(cin>>fib1>>fib2)
    {
        sum = fac(fib1)+fac(fib2);
        cout<<sum<<endl;
    }


    return 0;
}
