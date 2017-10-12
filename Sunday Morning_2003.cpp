#include<bits/stdc++.h>

#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int mm,hh, m, h, total;
    char ch;

    while(sf("%d%c%d",&hh, &ch, &mm) != EOF)
    {
        hh++;

        if(hh<8)
        {
            pf("Atraso maximo: 0\n");
        }
        else
        {
            m = mm;
            h = abs(hh-8);
            total = (h*60)+m;
            pf("Atraso maximo: %d\n",total);
        }
    }

    return 0;
}
