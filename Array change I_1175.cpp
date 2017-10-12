#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int n[20], temp;

    for(int i=0; i<20; i++)
    {
        cin>>n[i];
    }
    for(int i=0; i<10; i++)
    {
        temp = n[i];
        n[i] = n[19-i];
        n[19-i] = temp;
    }
    for(int i=0; i<20; i++)
    {
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }

    return 0;
}

