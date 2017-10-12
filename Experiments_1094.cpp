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
    int test, total, Ccount=0, Rcount=0, Scount=0, in;
    char ch[2];
    float cp,rp,sp;

    cin>>test;

    while(test--)
    {
        sf("%d%s",&in,&ch);

        if(ch[0] == 'C')
        {
            Ccount += in;
        }
        if(ch[0] == 'R')
        {
            Rcount += in;
        }
        if(ch[0] == 'S')
        {
            Scount += in;
        }
    }

    total = Ccount+Rcount+Scount;
    cp = (float)((Ccount*100.0)/total);
    rp = (float)((Rcount*100.0)/total);
    sp = (float)((Scount*100.0)/total);

    pf("Total: %d cobaias\n",total);
    pf("Total de coelhos: %d\n",Ccount);
    pf("Total de ratos: %d\n",Rcount);
    pf("Total de sapos: %d\n",Scount);
    pf("Percentual de coelhos: %.2f %%\n",cp);
    pf("Percentual de ratos: %.2f %%\n",rp);
    pf("Percentual de sapos: %.2f %%\n",sp);



    return 0;
}
