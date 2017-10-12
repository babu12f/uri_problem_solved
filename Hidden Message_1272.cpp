#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int test, l, i;
    bool f;
    string s, s1;

    cin>>test;
    getchar();

    while(test--)
    {
        getline (cin,s);
        s1 = "";
        f = true;
        l = s.length();

        for(i=0; i<l; i++)
        {
            if( (s[i]>='a' && s[i]<='z') && f )
            {
                s1 += s[i];
                f = false;
            }
            else if((s[i]<'a' || s[i]>'z'))
            {
                f = true;
            }
        }
        cout<<s1<<endl;
    }

    return 0;
}
