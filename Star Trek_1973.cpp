#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int n, i;
    ll sum=0, trac=0;

    cin>>n;

    int star[n], tuch[n];

    for(i=0; i<n; i++)
    {
        cin>>star[i];
        tuch[i]=0;
    }
    i=0;
    while(i>=0 && i<n)
    {
        if(star[i]%2==0)
        {
            tuch[i]=1;
            if(star[i]>0) star[i]--;
            i--;
        }
        else
        {
            tuch[i]=1;
            if(star[i]>0) star[i]--;
            i++;
        }
    }

    for(i=0; i<n; i++)
    {
        sum += star[i];
        trac += tuch[i];
    }
    cout<<trac<<" "<<sum<<endl;


    return 0;
}
