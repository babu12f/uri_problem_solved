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

string firstStr(char ch[])
{
    string s="";
    for(int i=0; ch[i]!=' '; i++)
    {
        s += ch[i];
    }
    return s;
}

string secondStr(char ch[])
{
    string s="";
    int j;
    for(int i=0; ch[i] != ' '; i++)j=i;

    for(int i=j+1; ch[i]!='\0'; i++)
    {
        if(ch[i]!=' ')
        s += ch[i];
    }
    //remove(s.begin(), s.end(), ' ');
    return s;
}

int main()
{
    int len, l1, l2, i, j, k, test;
    char str[1001];
    string s, s1, s2;

    cin>>test;
    getchar();
    while(test--)
    {
        s="";
        cin.getline(str,1001);
        //gets(str);

        s1 = firstStr(str);
        s2 = secondStr(str);

        l1 = s1.length();
        l2 = s2.length();

        for(i=0; i<l1&&i<l2; i++)
        {
            s += s1[i];
            s += s2[i];
        }
        if(i==l1)
        {
            for(; i<l2; i++)
            {
                s += s2[i];
            }
        }
        else
        {
            for(; i<l1; i++)
            {
                s += s1[i];
            }
        }
        cout<<s<<endl;
    }

    return 0;
}


