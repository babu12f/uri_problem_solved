#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int test, i, j, l, mx;
    int ch[26];
    string s;

    cin>>test;
    getchar();
    while(test--)
    {
        getline(cin,s);

        l = s.length();
        mx = 0;
        memset(ch, 0, sizeof(ch));

        for(i=0; i<l; i++)
        {
            if(isalpha(s[i]))
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    ch[s[i]-65]++;
                    if(ch[s[i]-65]>mx) mx = ch[s[i]-65];
                }
                else
                {
                    ch[s[i]-97]++;
                    if(ch[s[i]-97]>mx) mx = ch[s[i]-97];
                }
            }
        }

        for(i=0; i<26; i++)
        {
            if(ch[i]==mx) pf("%c", (i+97));
        }
        cout<<endl;
    }

    return 0;
}
