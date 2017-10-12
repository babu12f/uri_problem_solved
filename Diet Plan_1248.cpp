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

int max(int a, int b){return (a > b)? a : b;}

int main()
{
    int test, i, j, l1, l2, m, len;
    string s, s1, s2;
    size_t found;
    char str[30], str1[100], str2[30];

    cin>>test;
    getchar();

    while(test--)
    {
        gets(str);
        gets(str1);
        gets(str2);

        s = str;
        s1 = str1;
        s2 = str2;
        s1 = s1 + s2;

        sort(s.begin(),s.end());
        sort(s1.begin(),s1.end());

        l1 = s.length();
        l2 = s1.length();

        found=s.find(s1[0]);
        for(; found != string::npos ;)
        {
            s.erase(found,1);
            s1.erase(0,1);
            found=s.find(s1[0]);
        }
        l2 = s1.length();
        if(l2>0)
        {
            cout<<"CHEATER"<<endl;
        }
        else
        {
            cout<<s<<endl;
        }

    }

    return 0;
}
