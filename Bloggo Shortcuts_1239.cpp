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
    char ch[100], ch1[200];
    string s="", s1;
    bool i=true, b=true;

    while(gets(ch))
    {
        int count = 0;
        s1 = strCp(ch);
        s="";
        for(int j=0; ch[j]!='\0'; j++)
        {
            if(ch[j]=='_')
            {
                if(i)
                {
                    //s += "<i>";
                    ch1[count++]='<';
                    ch1[count++]='i';
                    ch1[count++]='>';
                    i = false;
                }
                else
                {
                    //s += "</i>";
                    ch1[count++]='<';
                    ch1[count++]='/';
                    ch1[count++]='i';
                    ch1[count++]='>';
                    i = true;
                }
            }
            else if(ch[j]=='*')
            {
                if(b)
                {
                    //s += "<b>";
                    ch1[count++]='<';
                    ch1[count++]='b';
                    ch1[count++]='>';
                    b = false;
                }
                else
                {
                    //s += "</b>";
                    ch1[count++]='<';
                    ch1[count++]='/';
                    ch1[count++]='b';
                    ch1[count++]='>';
                    b = true;
                }
            }
            else
            {
                ch1[count++]=ch[j];
            }
        }
        ch1[count]='\0';
        cout<<ch1<<endl;
    }


    return 0;
}

