#include<bits/stdc++.h>

#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int min, test, num[1000], i, in;

    cin>>test;

    for(i=0; i<test; i++)
    {
        cin>>num[i];
    }
    min = num[0];
    in=0;
    for(i=0; i<test; i++)
    {
        if(min>num[i]){min=num[i]; in=i;}
    }
    cout<<"Menor valor: "<<min<<endl;
    cout<<"Posicao: "<<in<<endl;

    return 0;
}
