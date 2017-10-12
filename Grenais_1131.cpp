#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int inter, gremio, intercount=0, gremiocount=0, total=0, n;

    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    while(cin>>inter>>gremio)
    {
        cin>>n;

        total++;

        if(inter > gremio) intercount++;
        else if(gremio > inter) gremiocount++;

        if(n==2) break;
        else cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    }

    cout<<total<<" grenais"<<endl;
    cout<<"Inter:"<<intercount<<endl;
    cout<<"Gremio:"<<gremiocount<<endl;
    cout<<"Empates:"<<(total-(intercount+gremiocount))<<endl;

    if(intercount > gremiocount) cout<<"Inter venceu mais"<<endl;
    else if(gremiocount > intercount) cout<<"Gremio venceu mais"<<endl;
    else cout<<"Nao houve vencedor"<<endl;


    return 0;
}


