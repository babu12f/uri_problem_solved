#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define pf printf
#define sf scanf

using namespace std;

string apend_space(string s, int x)
{
    for(int i=0; i<x; i++)s = " "+s;
    return s;
}

int main()
{
    int test, i, j, k, l, l2, l3, max;
    string s, s1, s2;
    char str[100][100];
    bool f=false;

    while(cin>>test && test !=0)
    {
        getchar();
        max = 0;
        if(f) cout<<endl;
        for(i=1; i<=test; i++)
        {
            gets(str[i]);
            if(strlen(str[i])>max) max = strlen(str[i]);
        }

        for(i=1; i<=test; i++)
        {
            s = str[i];
            l = s.length();
            if(l<max) cout<<apend_space(s, max-l)<<endl;
            else cout<<s<<endl;
        }
        f=true;
    }


    return 0;
}



