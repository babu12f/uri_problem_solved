#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int n, i, j, k, l, m, cyc, cnt;
    string s;

    while(getline(cin,s))
    {
        cin>>n;
        getchar();

        l = s.length();
        cyc = cnt = 0;

        for(i=0; i<l; i++)
        {
            if(s[i]=='W')
            {
                cyc++;
            }
            else if(s[i]=='R')
            {
                while(s[i]=='R')
                {
                    cnt++;
                    i++;
                }

                if(cnt%n==0)
                {
                    cyc += cnt/n;
                }
                else
                {
                    cyc += (cnt/n) + 1;
                }
                cnt=0;
                i--;
            }
        }
        cout<<cyc<<endl;
    }

    return 0;
}

