
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <functional>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    double basic, total;

    cin>>basic;

    if(basic<=400)
    {
        pf("Novo salario: %.2lf\n",((basic*15)/100 + basic));
        pf("Reajuste ganho: %.2lf\n",(basic*15)/100);
        pf("Em percentual: 15 %%\n");
    }
    else if(basic>400 && basic<=800)
    {
        pf("Novo salario: %.2lf\n",((basic*12)/100 + basic));
        pf("Reajuste ganho: %.2lf\n",(basic*12)/100);
        pf("Em percentual: 12 %%\n");
    }
    else if(basic>800 && basic<=1200)
    {
        pf("Novo salario: %.2lf\n",((basic*10)/100 + basic));
        pf("Reajuste ganho: %.2lf\n",(basic*10)/100);
        pf("Em percentual: 10 %%\n");
    }
    else if(basic>1200 && basic<=2000)
    {
        pf("Novo salario: %.2lf\n",((basic*7)/100 + basic));
        pf("Reajuste ganho: %.2lf\n",(basic*7)/100);
        pf("Em percentual: 7 %%\n");
    }
    else if(basic>200)
    {
        pf("Novo salario: %.2lf\n",((basic*4)/100 + basic));
        pf("Reajuste ganho: %.2lf\n",(basic*4)/100);
        pf("Em percentual: 4 %%\n");
    }

    return 0;
}
