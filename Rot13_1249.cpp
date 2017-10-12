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
    int len, l1, l2, i, j, k, test, sift=13, t;
    char str[1001];
    string s, s1, s2;

    while(cin.getline(str,1001))
    {

        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                if( (str[i]-sift) < 'A' )
                {
                    t = str[i] - 'A';
                    t = ( sift - t) - 1;

                    str[i]= ('Z' - t);
                }
                else
                {
                    str[i] = str[i]-sift;
                }
            }
            if(str[i]>='a' && str[i]<='z')
            {
                if( (str[i]-sift) < 'a' )
                {
                    t = str[i] - 'a';
                    t = ( sift - t) - 1;

                    str[i]= ('z' - t);
                }
                else
                {
                    str[i] = str[i]-sift;
                }
            }
        }

        cout<<str<<endl;
    }

    return 0;
}
