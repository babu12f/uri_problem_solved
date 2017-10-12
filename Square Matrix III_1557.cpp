#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

ll matrix[100][100];
int width;

void fill_matrix(ll s, ll e, ll val)
{
    ll i, j, c,d;
    c=d=val;

    ///fill top row
    for(i=s; i<e; i++)
    {
        matrix[s][i]=c;
        c += c;
    }

    c = d+d;
    ///fill left col
    for(i=s+1; i<e; i++)
    {
        matrix[i][s]=c;
        c+=c;
    }

    d = c;
    ///fill right col
    for(i=s+1; i<e; i++)
    {
        matrix[i][e-1]=c;
        c+=c;
    }

    c= d;
    ///fill bottom row
    for(i=s+1; i<e-1; i++)
    {
        matrix[e-1][i]=c;
        c+=c;
    }
}

void print_matrix(int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {

        for(j=0; j<n; j++)
        {
            if(j==n-1) printf("%*lld",width, matrix[i][j]);
            else printf("%*lld ", width,matrix[i][j]);

        }
        pf("\n");
    }
    pf("\n");
}

int count_digit(ll n)
{
    int count = 0;
    while(n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
    ll n, i, s, val, max;

    while(cin>>n && n>0)
    {
        val = 1;
        max = pow(2,((n*2)-2));
        width = count_digit(max);
        if(n%2 == 0)s = (n/2);
        else s = (n/2)+1;
        for(i=0; i<s; i++)
        {
            fill_matrix(i,(n-i), val);
            val *= 4;
        }
        print_matrix(n);
    }

    return 0;
}


