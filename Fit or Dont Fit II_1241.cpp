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
    return s;
}

string getLastPart(string s, int n)
{
    int l = s.length();
    n = l - n;
    string news = "";

    for(int i=n; i<l; i++)
    {
        news += s[i];
    }
    return news;
}

int main()
{
    int len, l1, l2, i, j, k, test;
    char str[2004];
    string s, s1, s2;

    cin>>test;
    getchar();
    while(test--)
    {
        cin.getline(str,2004);

        s1 = firstStr(str);
        s2 = secondStr(str);

        l1 = s1.length();
        l2 = s2.length();

        s=s1;
        if(l1>l2)
        {
            s = getLastPart(s1,l2);
        }

        if(s.compare(s2)==0)cout<<"encaixa"<<endl;
        else cout<<"nao encaixa"<<endl;

    }

    return 0;
}
