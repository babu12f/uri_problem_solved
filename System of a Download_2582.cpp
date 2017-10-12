#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int test, x, y;

    cin>>test;

    while(test--)
    {
        cin>>x>>y;

        if((x+y)==0)
        {
            cout<<"PROXYCITY"<<endl;
        }
        else if((x+y)==1)
        {
            cout<<"P.Y.N.G."<<endl;
        }
        else if((x+y)==2)
        {
            cout<<"DNSUEY!"<<endl;
        }
        else if((x+y)==3)
        {
            cout<<"SERVERS"<<endl;
        }
        else if((x+y)==4)
        {
            cout<<"HOST!"<<endl;
        }
        else if((x+y)==5)
        {
            cout<<"CRIPTONIZE"<<endl;
        }
        else if((x+y)==6)
        {
            cout<<"OFFLINE DAY"<<endl;
        }
        else if((x+y)==7)
        {
            cout<<"SALT"<<endl;
        }
        else if((x+y)==8)
        {
            cout<<"ANSWER!"<<endl;
        }
        else if((x+y)==9)
        {
            cout<<"RAR?"<<endl;
        }
        else if((x+y)==10)
        {
            cout<<"WIFI ANTENNAS"<<endl;
        }
    }

    return 0;
}
