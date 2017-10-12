#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

string apend_space(string s, int x)
{
    for(int i=0; i<x; i++)s = " "+s;
    return s;
}

int main()
{
    int test, l, i, max, j;
    bool f = false;
    string s, s1, s2;
    string store[100];

    while(cin>>test && test!=0)
    {
        getchar();
        max = 0;
        if(f)cout<<endl;
        for(j=0; j<test; j++)
        {
            getline(cin,s);

            l = s.length();

            s1 = "";

            for(i=0; i<l; i++)
            {
                if(s[i]!=' ') s1 += s[i];
                else
                {
                    s1 += s[i];
                    while(s[i]==' ') i++;
                    i--;
                }
            }

            l = s1.length();
            if(s1[l-1]==' ')s1.erase (l-1,1);
            if(s1[0]==' ')s1.erase (0,1);
            if(l>max)max = l;

            store[j] = s1;
        }

        for(i=0; i<test; i++)
        {
            s = store[i];
            l = s.length();
            if(l<max) cout<<apend_space(s, max-l)<<endl;
            else cout<<s<<endl;
        }
        f=true;
    }

    return 0;
}
