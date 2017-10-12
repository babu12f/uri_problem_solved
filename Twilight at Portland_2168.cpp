#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

bool save_unsave(int x, int y, int p, int q)
{
    if( (x+y+p+q) >=2 ) return true;
    return false;
}

int main()
{
    int data[101][101];
    int n, x, i, j, k, l;
    string s="";

    cin>>n;
    n++;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>data[i][j];
        }
        if(i>0)
        {
            x = i-1;
            for(j=0; j<n-1; j++)
            {
                if(save_unsave(data[x][j], data[x][j+1], data[x+1][j], data[x+1][j+1])) s+="S";
                else s+="U";
            }
            s+="\n";
        }
    }
    cout<<s;

    return 0;
}

