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
    int ty, alcohol=0, gasolin=0, disel=0;

    while(cin>>ty)
    {
        if(ty == 4) break;
        if(ty == 1) alcohol++;
        if(ty == 2) gasolin++;
        if(ty == 3) disel++;
    }

    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alcohol<<endl;
    cout<<"Gasolina: "<<gasolin<<endl;
    cout<<"Diesel: "<<disel<<endl;

    return 0;
}
