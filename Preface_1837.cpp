#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;


int main()
{
    int a, b, q, r;

    cin>>a>>b;

    if(a>0 && b>0)
    {
        q = a/b;
        r = a%b;
    }
    else if(a>0 && b<0)
    {
        q = a/b;
        r = a%b;
    }
    else if(a<0 && b>0)
    {
        q = a/b;
        r = a%b;

        if(r<0) q--;

        r = a - (q*b);
    }
    else
    {
        q = a/b;
        r = a%b;

        if(r<0) q++;

        r = a - (q*b);
    }

    cout<<q<<" "<<r<<endl;

    return 0;
}


