#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;


int main()
{
    int n, i, j, k, l, min, id;
    int arr[21]={0};

    cin>>n;

    min=21;
    for(i=1; i<=n; i++)
    {
        cin>>j;
        if(j<min)
        {
            id = i;
            min = j;
        }
    }
    cout<<id<<endl;

    return 0;
}

