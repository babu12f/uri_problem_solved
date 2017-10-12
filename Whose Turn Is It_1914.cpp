#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long
#define max 10001

using namespace std;

int main()
{
    string s1, g1, s2, g2;
    int test, n1, n2;

    cin>>test;

    while(test--)
    {
        cin>>s1>>g1>>s2>>g2;
        cin>>n1>>n2;

        if((n1+n2)%2==0)
        {
            if(g1=="PAR")
            {
                cout<<s1<<endl;
            }
            else
            {
                cout<<s2<<endl;
            }
        }
        else
        {
            if(g1=="IMPAR")
            {
                cout<<s1<<endl;
            }
            else
            {
                cout<<s2<<endl;
            }
        }
    }


    return 0;
}


