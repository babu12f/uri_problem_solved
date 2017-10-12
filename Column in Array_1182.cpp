#include<bits/stdc++.h>

#define sf scanf
#define pf printf

using namespace std;

int main()
{
    float store[12][12], m;
    double sum=0;
    char ch;
    int n, i, j;

    cin>>n;
    cin>>ch;
    getchar();

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>m;
            if(j==n)
            {
                sum +=m;
            }
        }
    }
    cout<<fixed;
    cout<<setprecision(1);

    if(ch=='S')cout<<sum<<endl;
    else cout<<sum/12<<endl;

    return 0;
}
