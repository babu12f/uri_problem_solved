#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <string.h>

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
    int len, l1, l2, i, j, k, test;
    char str[200];
    string s, s1, s2;

    cin>>test;
    getchar();
    while(test--)
    {
        cin.getline(str,200);
        s = strCp(str);

        s1 = s.substr (0,(s.length()/2));
        s2 = s.substr ((s.length()/2));

        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());

        cout<<s1+s2<<endl;

    }

    return 0;
}
