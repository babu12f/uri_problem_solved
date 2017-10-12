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

int lcsStr(string s1, string s2)
{
    int l1 = s1.length(), l2 = s2.length(), i, j, result=0;

    int l[l1+1][l2+1];

    for(i=0; i<=l1; i++)
    {
        for(j=0; j<=l2; j++)
        {
            if(i==0 || j==0)
            {
                l[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1])
            {
                l[i][j] = l[i-1][j-1]+1;
                result = max(result,l[i][j]);
            }
            else
            {
                l[i][j] = 0;
            }
        }
    }
    return result;
}

int lcsStr(char s1[], char s2[])
{
    int l1 = strlen(s1), l2 = strlen(s2), i, j, result=0;

    int l[l1+1][l2+1];

    for(i=0; i<=l1; i++)
    {
        for(j=0; j<=l2; j++)
        {
            if(i==0 || j==0)
            {
                l[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1])
            {
                l[i][j] = l[i-1][j-1]+1;
                result = max(result,l[i][j]);
            }
            else
            {
                l[i][j] = 0;
            }
        }
    }
    return result;
}

int main()
{
    string s, s1;
    char str[200];
    char str1[200];

    while(true)
    {
        //cin.getline(str,200);
        //s = strCp(str);
        gets(str);
        gets(str1);

        //cin.getline(str1,200);
        //s1 = strCp(str);

        cout<<lcsStr(str, str1)<<endl;
    }

    return 0;
}

