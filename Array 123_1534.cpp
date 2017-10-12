#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int matrix[100][100];

void fill_matrix(int s, int e)
{
    int i, j;

    //cout<<s<<" "<<e<<endl;
    ///fill top row
    if((e-s)==1) { matrix[s][s]=2; return;}
    matrix[s][s]=1;
    matrix[s][e-1] = 2;
    for(i=s+1; i<e-1; i++)matrix[s][i]=3;

    matrix[e-1][s] = 2;
    ///fill left col
    for(i=s+1; i<e-1; i++)matrix[i][s]=3;

    matrix[e-1][e-1] = 1;
    ///fill right col
    for(i=s+1; i<e-1; i++)matrix[i][e-1]=3;


    ///fill bottom row
    for(i=s+1; i<e-1; i++)matrix[e-1][i]=3;
}

void print_matrix(int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {

        for(j=0; j<n; j++)
        {
            if(j==n-1) printf("%d", matrix[i][j]);
            else printf("%d", matrix[i][j]);

        }
        pf("\n");
    }
}

int main()
{
    int n, i, s;

    while(cin>>n && n>0)
    {
        if(n%2 == 0)s = (n/2);
        else s = (n/2)+1;
        for(i=0; i<s; i++)
        {
            fill_matrix(i,(n-i));
        }
        print_matrix(n);
    }

    return 0;
}

