
#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long
#define max 10001

using namespace std;

bool valid_triangle(int a, int b, int c)
{
    if((a+b)>c && (b+c)>a && (a+c)>b)return true;
    else return false;
}

int main()
{
    string s[2000];
    int test;

    cin>>test;
    getchar();
    for(int i=0; i<test; i++)
    {
        getline(cin,s[i]);
    }
    cout<<"Ciencia da Computacao"<<endl;

    return 0;
}
