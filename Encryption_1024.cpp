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
    int len, half, test;
    char str[1001];
    string s;

    cin>>test;
    getchar();
    while(test--)
    {
        cin.getline(str,1001);
        //gets(str);
        s = strCp(str);

        len = s.length();

        for(int i=0; i<len; i++)
        {

            if(isalpha(s[i]))
            {
                s[i] += 3;

            }
        }
        reverse(s.begin(), s.end());
        for(int i=len/2; i<len; i++)
        {
            s[i] -= 1;
        }

        cout<<s<<endl;
    }

    return 0;
}

