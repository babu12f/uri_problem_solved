#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int test, i, j, k, l, m, n, count, c;
    int ccount[26];
    string s;

    cin>>test;
    getchar();
    while(test--)
    {
        getline(cin,s);
        l = s.length();
        memset(ccount, 0, sizeof(ccount));
        c = 0;

        for(i=0; i<l; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                if(ccount[(int)s[i]-97]==0)
                {
                    ccount[(int)s[i]-97]=1;
                    c++;
                }
            }
        }
        if(c==26)
        {
            cout<<"frase completa"<<endl;
        }
        else if(c>=13)
        {
            cout<<"frase quase completa"<<endl;
        }
        else
        {
            cout<<"frase mal elaborada"<<endl;
        }
    }

    return 0;
}
