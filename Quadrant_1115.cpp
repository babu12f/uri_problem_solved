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
    int x,y;

    while(cin>>x>>y && (x!=0 && y!=0))
    {
        if(x>0 && y>0){cout<<"primeiro"<<endl;}
        else if(x<0 && y>0){cout<<"segundo"<<endl;}
        else if(x<0 && y<0){cout<<"terceiro"<<endl;}
        else if(x>0 && y<0){cout<<"quarto"<<endl;}
    }

    return 0;
}



