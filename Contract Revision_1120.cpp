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

string strCp(char ch[])
{
    string s="";
    for(int i=0; ch[i]!='\0'; i++)
    {
        s += ch[i];
    }
    return s;
}

int main()
{
    int len, d, ch;
    char str[200];

    ostringstream ss;
    string s, s1, s2="";

    while(true)
    {
        cin>>d;
        getchar();
        cin.getline(str,200);

        s = strCp(str);

        len = s.length();

        if(d==0 && strcmp(str,"0")==0) break;
        ss<<d;
        s2 = ss.str();
        ss.str("");

        s.erase(remove(s.begin(), s.end(), s2[0]), s.end());

        for(; s[0]=='0';)s.erase(0,1);

        if(s.length()==0) s="0";

        cout<<s<<endl;

    }

    return 0;
}

