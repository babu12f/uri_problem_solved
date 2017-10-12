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
            if(s=="papel")cout<<"Ambos venceram"<<endl;
            if(s=="pedra")cout<<"Sem ganhador"<<endl;
            if(s=="ataque")cout<<"Aniquilacao mutua"<<endl;
        }
        else if(s=="papel")
        {
            cout<<"Jogador 2 venceu"<<endl;
        }
        else if(s=="pedra")
        {
            if(s1=="papel") cout<<"Jogador 1 venceu"<<endl;
            else cout<<"Jogador 2 venceu"<<endl;
        }
        else if(s=="ataque")
        {
            cout<<"Jogador 1 venceu"<<endl;
        }
    }

    return 0;
}

