#include <bits/stdc++.h>

#define debug(x) cout << #x " = " << (x) << endl

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int test;
    string s, s1;

    cin>>test;
    for(int i=1; i<=test; i++)
    {
        cin>>s>>s1;

        if(s==s1)
        {
            pf("Caso #%d: De novo!\n",i);
        }
        else if(s=="tesoura")
        {
            if(s1=="papel" || s1=="lagarto" ) pf("Caso #%d: Bazinga!\n",i);
            else pf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(s=="papel")
        {
            if(s1=="pedra" || s1=="Spock" ) pf("Caso #%d: Bazinga!\n",i);
            else pf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(s=="pedra")
        {
            if(s1=="lagarto" || s1=="tesoura" ) pf("Caso #%d: Bazinga!\n",i);
            else pf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(s=="lagarto")
        {
            if(s1=="Spock" || s1=="papel" ) pf("Caso #%d: Bazinga!\n",i);
            else pf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(s=="Spock")
        {
            if(s1=="tesoura" || s1=="pedra" ) pf("Caso #%d: Bazinga!\n",i);
            else pf("Caso #%d: Raj trapaceou!\n",i);
        }
    }

    return 0;
}

