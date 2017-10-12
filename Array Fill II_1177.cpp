#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int n, c=0;

    cin>>n;
    for(int i=0; i<1000; i++)
    {
        if(c==n)c=0;
        cout<<"N["<<i<<"] = "<<c++<<endl;
    }

    return 0;
}
