#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    string s, s1="", s2;
    char ch='\0';

    cin>>s;

    if(s[0]=='-'){ch='-'; s.erase (0,1);}
    else ch = '+';

    int f = s.find(".");
    int l = s.length();
    int i, l1;
    l1 = l;
    stringstream ss;
    ss << l-1;
    s2 = ss.str();

    if(f>-1)
    {
        if(s[0]=='0')
        {
            for(i=f+1; s[i]=='0'; i++);
            l = i-f;
            s1 += ch;
            s1 += s[i];i++;
            s1 += '.';
            s1 += (s[i])?s[i]:'0';i++;
            s1 += (s[i])?s[i]:'0';i++;
            s1 += (s[i])?s[i]:'0';i++;

            if(i+1<=l1 && i<=l1)
            {
                if(s[i+1]>='5')
                    s1 += s[i]+1;
                else
                    s1 += '0';
            }
            else
            {
                s1 += '0';
            }
            s1 += "E-";
            ss.str("");
            if(l<10) s1 += '0';
            ss<<l;
            s2 = ss.str();
            s1 += s2;
        }
        else
        {
            if(f>1)
            {
            }
            else
            {
            }
        }
    }
    else
    {
        s1 += ch;
        s1 += s[0];
        s1 += '.';
        s1 += (s[1])?s[1]:'0';
        s1 += s[2];
        s1 += s[3];

        if(s[5]>='5')
        {
            s1 += s[4]+1;
        }
        else
        {
            s1 += s[4];
        }
        s1 += "E+";
        s1 += s2;
    }
    cout<<s1;


    return 0;
}

