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

bool checkOne(string s)
{
    string s1=s;

    s1[0]='o';
    if(s1.compare("one")==0) return true;
    s1 = s;
    s1[1]='n';
    if(s1.compare("one")==0) return true;
    s1 = s;
    s1[2]='e';
    if(s1.compare("one")==0) return true;

    return false;
}

bool checkTwo(string s)
{
    string s1=s;

    s1[0]='t';
    if(s1.compare("two")==0) return true;
    s1 = s;
    s1[1]='w';
    if(s1.compare("two")==0) return true;
    s1 = s;
    s1[2]='o';
    if(s1.compare("two")==0) return true;

    return false;
}

bool checkThree(string s)
{
    string s1=s;

    if(s.length()<5) return false;

    s1[0]='t';
    if(s1.compare("three")==0) return true;
    s1 = s;
    s1[1]='h';
    if(s1.compare("three")==0) return true;
    s1 = s;
    s1[2]='r';
    if(s1.compare("three")==0) return true;
    s1 = s;
    s1[3]='e';
    if(s1.compare("three")==0) return true;
    s1 = s;
    s1[4]='e';
    if(s1.compare("three")==0) return true;

    return false;
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

        if(checkOne(s))cout<<"1"<<endl;
        if(checkTwo(s))cout<<"2"<<endl;
        if(checkThree(s))cout<<"3"<<endl;

    }

    return 0;
}
