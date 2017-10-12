#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    short arr[1001][1001];
    int r, c, x, i, j, r1=-1, c1=-1;
    bool f=false;

    cin>>r>>c;
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            cin>>arr[i][j];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(arr[i][j]==42 && !f)
            {
                if(arr[i][j-1]==7 && arr[i][j+1]==7 && arr[i-1][j]==7 && arr[i+1][j]==7 && arr[i-1][j-1]==7 && arr[i+1][j+1]==7 && arr[i+1][j-1]==7 && arr[i-1][j+1]==7)
                {
                    f = true;
                    r1 = i;
                    c1 = j;
                }
            }
        }
    }

    cout<<r1+1<<" "<<c1+1<<endl;

    return 0;
}
