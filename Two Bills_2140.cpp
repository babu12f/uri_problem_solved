#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

bool posible(int n)
{
    if(n==100) return true;
    else if(n==50) return true;
    else if(n==20) return true;
    else if(n==10) return true;
    else if(n==5) return true;
    else if(n==2) return true;
    else return false;
}

int main()
{
    int n, m, i, j, total;

    while(cin>>n>>m && (n>0 || m>0))
    {
        total = m-n;

        if(total>200 || total<4)
        {
            cout<<"impossible"<<endl;
        }
        else if(total>100 && posible(total-100))
        {
            cout<<"possible"<<endl;
        }
        else if(total>50 && posible(total-50))
        {
            cout<<"possible"<<endl;
        }
        else if(total>20 && posible(total-20))
        {
            cout<<"possible"<<endl;
        }
        else if(total>10 && posible(total-10))
        {
            cout<<"possible"<<endl;
        }
        else if(total>5 && posible(total-5))
        {
            cout<<"possible"<<endl;
        }
        else if(total>2 && posible(total-2))
        {
            cout<<"possible"<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }
    }

    return 0;
}


