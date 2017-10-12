
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
    int a, b, c, d;

    cin>>a>>b>>c>>d;

    if(valid_triangle(a,b,c)) cout<<"S"<<endl;
    else if(valid_triangle(b,c,d)) cout<<"S"<<endl;
    else if(valid_triangle(c,d,a)) cout<<"S"<<endl;
    else if(valid_triangle(d,a,b)) cout<<"S"<<endl;
    else cout<<"N"<<endl;

    return 0;
}


